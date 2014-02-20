/*
 * This file is part of the Open Peripheral Template Library project.
 *
 * Copyright (C) 2014 Frantisek Burian <BuFran@seznam.cz>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef OPTL_STM32_HWSERIAL_INCLUDED
#define OPTL_STM32_HWSERIAL_INCLUDED

namespace OPTL
{

template <uint32_t base, class rxpin, class txpin, typename clk = Clock<base>, typename afnum = PinAf<base> >
class HwSerial
{
public:
	typedef clk clock;

	template<uint32_t cpuclock, uint32_t baudrate>
	OPTL_NOINLINE
	void init()
	{
		clk::enable();
		rxpin::clock::enable();
		txpin::clock::enable();

		rxpin::init_alternate(afnum::af);
		txpin::init_alternate(afnum::af);

		rxpin::driver_pushpull();
		txpin::driver_pushpull();

		USART_BRR(base) = ((2 * cpuclock) + baudrate) / (2 * baudrate);
		USART_CR1(base) &= ~USART_CR1_M; /* 8 data bits */
		USART_CR1(base) = (USART_CR1(base) & ~USART_PARITY_MASK) |
				   USART_PARITY_NONE;
		USART_CR2(base) = (USART_CR2(base) & ~USART_CR2_STOPBITS_MASK) |
				   USART_STOPBITS_1;
		USART_CR3(base) = (USART_CR3(base) & ~USART_FLOWCONTROL_MASK) |
				   USART_FLOWCONTROL_NONE;

		USART_CR1(base) = (USART_CR1(base) & ~USART_MODE_MASK) |
				   USART_MODE_TX_RX;

	}

	OPTL_INLINE
	void enable()
	{
		USART_CR1(base) |= USART_CR1_UE;
	}

	OPTL_INLINE
	void disable()
	{
		USART_CR1(base) &= ~USART_CR1_UE;
	}

	OPTL_INLINE
	void write(uint8_t ch)
	{
		USART_DR(base) = ch & USART_DR_MASK;
	}

	OPTL_INLINE
	uint8_t read()
	{
		return USART_DR(base) & USART_DR_MASK;
	}

	OPTL_INLINE
	bool is_write_ready()
	{
		return USART_SR(base) & USART_SR_TXE;
	}

	OPTL_INLINE
	bool is_read_ready()
	{
		return USART_SR(base) & USART_SR_RXNE;
	}
};

};


#endif /* OPTL_STM32_HWSERIAL_INCLUDED */

