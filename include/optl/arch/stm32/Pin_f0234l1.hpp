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

#ifndef OPTL_STM32_PIN_INCLUDED
#define OPTL_STM32_PIN_INCLUDED


namespace OPTL
{
template<uint32_t port, int pin, typename clk = Clock<port> >
class Pin
{
	static const uint32_t mask = 1U << pin;

public:
	typedef clk clock;

/******************************************************************************/
	OPTL_INLINE
	void high()
	{
		GPIO_BSRR(port) = mask;
	}

	OPTL_INLINE
	void low()
	{
		GPIO_BSRR(port) = (mask << 16);
	}

	OPTL_INLINE
	void toggle()
	{
		GPIO_ODR(port) ^= mask;
	}

	OPTL_INLINE
	bool read()
	{
		return GPIO_IDR(port) & mask;
	}

	OPTL_INLINE
	void write(bool value)
	{
		GPIO_BSRR(port) = (value) ? mask : (mask << 16);
	}

/******************************************************************************/
	OPTL_INLINE
	void init_input()
	{
		GPIO_MODER(port) = (GPIO_MODER(port) & ~GPIO_MODE_MASK(pin)) |
				    GPIO_MODE(pin, GPIO_MODE_INPUT);
	}

	OPTL_INLINE
	void init_output()
	{
		GPIO_MODER(port) = (GPIO_MODER(port) & ~GPIO_MODE_MASK(pin)) |
				    GPIO_MODE(pin, GPIO_MODE_OUTPUT);
	}

	OPTL_INLINE
	void init_analog()
	{
		GPIO_MODER(port) = (GPIO_MODER(port) & ~GPIO_MODE_MASK(pin)) |
				    GPIO_MODE(pin, GPIO_MODE_ANALOG);
	}

	OPTL_INLINE
	void init_alternate(uint32_t af)
	{
		GPIO_MODER(port) = (GPIO_MODER(port) & ~GPIO_MODE_MASK(pin)) |
				    GPIO_MODE(pin, GPIO_MODE_AF);

		if (pin < 8)
			GPIO_AFRL(port) = (GPIO_AFRL(port) & ~GPIO_AFR_MASK(pin)) |
					    GPIO_AFR(pin, af);
		else
			GPIO_AFRH(port) = (GPIO_AFRH(port) & ~GPIO_AFR_MASK(pin-8)) |
					    GPIO_AFR(pin-8, af);
	}

/******************************************************************************/
	OPTL_INLINE
	void driver_pushpull()
	{
		GPIO_OTYPER(port) &= mask; /* push-pull */
	}

	OPTL_INLINE
	void driver_opencollector()
	{
		GPIO_OTYPER(port) |= mask;
	}

/******************************************************************************/
	OPTL_INLINE
	void pull_off()
	{
		GPIO_PUPDR(port) = (GPIO_PUPDR(port) & ~GPIO_PUPD_MASK(pin)) |
				    GPIO_PUPD(pin, GPIO_PUPD_NONE);
	}

	OPTL_INLINE
	void pull_up()
	{
		GPIO_PUPDR(port) = (GPIO_PUPDR(port) & ~GPIO_PUPD_MASK(pin)) |
				    GPIO_PUPD(pin, GPIO_PUPD_PULLUP);
	}

	OPTL_INLINE
	void pull_down()
	{
		GPIO_PUPDR(port) = (GPIO_PUPDR(port) & ~GPIO_PUPD_MASK(pin)) |
				    GPIO_PUPD(pin, GPIO_PUPD_PULLDOWN);
	}
};



};

#endif /* OPTL_STM32_PIN_INCLUDED */

