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

#ifndef OPTL_STM32_CLOCK_INCLUDED
#define OPTL_STM32_CLOCK_INCLUDED

#include <libopencm3/stm32/rcc.h>

namespace OPTL
{

template<enum rcc_periph_clken clock>
class ClockDef
{
public:
	OPTL_INLINE
	void enable()
	{
		MMIO32(RCC_BASE + ((clock) >> 5)) |= (1 << ((clock) & 0x1f));
	}
};

template<uint32_t periph> class Clock {};

};

#endif /* OPTL_STM32_CLOCK_INCLUDED */



