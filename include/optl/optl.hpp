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

#ifndef OPTL_INCLUDED
#define OPTL_INCLUDED 1

#define OPTL_INLINE	static inline __attribute__((always_inline))
#define OPTL_NOINLINE	static

namespace OPTL
{

class None {};

}

#if defined(STM32F0) || defined(STM32F1) || defined(STM32F2) || defined(STM32F3) || defined(STM32F4) || defined(STM32L1)

# include <libopencm3/stm32/f4/memorymap.h>
# include <libopencm3/stm32/f4/gpio.h>
# include <libopencm3/stm32/f4/rcc.h>
# include <libopencm3/stm32/f4/usart.h>
# include <libopencm3/stm32/f4/spi.h>
# include <libopencm3/stm32/f4/i2c.h>
# include <libopencm3/stm32/f4/can.h>
# include <libopencm3/stm32/f4/timer.h>

# include <optl/arch/cortexm/Delay.hpp>
# include <optl/arch/stm32/Clock.hpp>

#endif



#if defined(STM32F0)

# include <optl/arch/stm32/Pin_f0234l1.hpp>
# include <optl/arch/stm32/PinAf_f0234l1.hpp>
# include <optl/arch/stm32/HwSerial_f0234l1.hpp>

#elif defined(STM32F1)

#elif defined(STM32F2)

# include <optl/arch/stm32/Pin_f0234l1.hpp>
# include <optl/arch/stm32/PinAf_f0234l1.hpp>
# include <optl/arch/stm32/HwSerial_f0234l1.hpp>

#elif defined(STM32F3)

# include <optl/arch/stm32/Pin_f0234l1.hpp>
# include <optl/arch/stm32/PinAf_f0234l1.hpp>
# include <optl/arch/stm32/HwSerial_f0234l1.hpp>

#elif defined(STM32F4)

# include <optl/arch/stm32/Pin_f0234l1.hpp>
# include <optl/arch/stm32/PinAf_f0234l1.hpp>
# include <optl/arch/stm32/HwSerial_f0234l1.hpp>

#elif defined(STM32L1)

# include <optl/arch/stm32/Pin_f0234l1.hpp>
# include <optl/arch/stm32/PinAf_f0234l1.hpp>
# include <optl/arch/stm32/HwSerial_f0234l1.hpp>

#else

# error "No compatible CPU defined. Stop."

#endif

#endif /* OPTL_INCLUDED */
