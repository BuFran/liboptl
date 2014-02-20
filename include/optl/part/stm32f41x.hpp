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

#ifndef OPTL_STM32F41X_INCLUDED
#define OPTL_STM32F41X_INCLUDED

namespace OPTL
{
/*****************************************************************************
 * GPIO                                                                      *
 *****************************************************************************/

typedef Pin<GPIOA, 0> PA0;
typedef Pin<GPIOA, 1> PA1;
typedef Pin<GPIOA, 2> PA2;
typedef Pin<GPIOA, 3> PA3;
typedef Pin<GPIOA, 4> PA4;
typedef Pin<GPIOA, 5> PA5;
typedef Pin<GPIOA, 6> PA6;
typedef Pin<GPIOA, 7> PA7;
typedef Pin<GPIOA, 8> PA8;
typedef Pin<GPIOA, 9> PA9;
typedef Pin<GPIOA, 10> PA10;
typedef Pin<GPIOA, 11> PA11;
typedef Pin<GPIOA, 12> PA12;
typedef Pin<GPIOA, 13> PA13;
typedef Pin<GPIOA, 14> PA14;
typedef Pin<GPIOA, 15> PA15;

typedef Pin<GPIOB, 0> PB0;
typedef Pin<GPIOB, 1> PB1;
typedef Pin<GPIOB, 2> PB2;
typedef Pin<GPIOB, 3> PB3;
typedef Pin<GPIOB, 4> PB4;
typedef Pin<GPIOB, 5> PB5;
typedef Pin<GPIOB, 6> PB6;
typedef Pin<GPIOB, 7> PB7;
typedef Pin<GPIOB, 8> PB8;
typedef Pin<GPIOB, 9> PB9;
typedef Pin<GPIOB, 10> PB10;
typedef Pin<GPIOB, 11> PB11;
typedef Pin<GPIOB, 12> PB12;
typedef Pin<GPIOB, 13> PB13;
typedef Pin<GPIOB, 14> PB14;
typedef Pin<GPIOB, 15> PB15;

typedef Pin<GPIOC, 0> PC0;
typedef Pin<GPIOC, 1> PC1;
typedef Pin<GPIOC, 2> PC2;
typedef Pin<GPIOC, 3> PC3;
typedef Pin<GPIOC, 4> PC4;
typedef Pin<GPIOC, 5> PC5;
typedef Pin<GPIOC, 6> PC6;
typedef Pin<GPIOC, 7> PC7;
typedef Pin<GPIOC, 8> PC8;
typedef Pin<GPIOC, 9> PC9;
typedef Pin<GPIOC, 10> PC10;
typedef Pin<GPIOC, 11> PC11;
typedef Pin<GPIOC, 12> PC12;
typedef Pin<GPIOC, 13> PC13;
typedef Pin<GPIOC, 14> PC14;
typedef Pin<GPIOC, 15> PC15;

typedef Pin<GPIOD, 0> PD0;
typedef Pin<GPIOD, 1> PD1;
typedef Pin<GPIOD, 2> PD2;
typedef Pin<GPIOD, 3> PD3;
typedef Pin<GPIOD, 4> PD4;
typedef Pin<GPIOD, 5> PD5;
typedef Pin<GPIOD, 6> PD6;
typedef Pin<GPIOD, 7> PD7;
typedef Pin<GPIOD, 8> PD8;
typedef Pin<GPIOD, 9> PD9;
typedef Pin<GPIOD, 10> PD10;
typedef Pin<GPIOD, 11> PD11;
typedef Pin<GPIOD, 12> PD12;
typedef Pin<GPIOD, 13> PD13;
typedef Pin<GPIOD, 14> PD14;
typedef Pin<GPIOD, 15> PD15;

typedef Pin<GPIOE, 0> PE0;
typedef Pin<GPIOE, 1> PE1;
typedef Pin<GPIOE, 2> PE2;
typedef Pin<GPIOE, 3> PE3;
typedef Pin<GPIOE, 4> PE4;
typedef Pin<GPIOE, 5> PE5;
typedef Pin<GPIOE, 6> PE6;
typedef Pin<GPIOE, 7> PE7;
typedef Pin<GPIOE, 8> PE8;
typedef Pin<GPIOE, 9> PE9;
typedef Pin<GPIOE, 10> PE10;
typedef Pin<GPIOE, 11> PE11;
typedef Pin<GPIOE, 12> PE12;
typedef Pin<GPIOE, 13> PE13;
typedef Pin<GPIOE, 14> PE14;
typedef Pin<GPIOE, 15> PE15;

typedef Pin<GPIOF, 0> PF0;
typedef Pin<GPIOF, 1> PF1;
typedef Pin<GPIOF, 2> PF2;
typedef Pin<GPIOF, 3> PF3;
typedef Pin<GPIOF, 4> PF4;
typedef Pin<GPIOF, 5> PF5;
typedef Pin<GPIOF, 6> PF6;
typedef Pin<GPIOF, 7> PF7;
typedef Pin<GPIOF, 8> PF8;
typedef Pin<GPIOF, 9> PF9;
typedef Pin<GPIOF, 10> PF10;
typedef Pin<GPIOF, 11> PF11;
typedef Pin<GPIOF, 12> PF12;
typedef Pin<GPIOF, 13> PF13;
typedef Pin<GPIOF, 14> PF14;
typedef Pin<GPIOF, 15> PF15;

typedef Pin<GPIOG, 0> PG0;
typedef Pin<GPIOG, 1> PG1;
typedef Pin<GPIOG, 2> PG2;
typedef Pin<GPIOG, 3> PG3;
typedef Pin<GPIOG, 4> PG4;
typedef Pin<GPIOG, 5> PG5;
typedef Pin<GPIOG, 6> PG6;
typedef Pin<GPIOG, 7> PG7;
typedef Pin<GPIOG, 8> PG8;
typedef Pin<GPIOG, 9> PG9;
typedef Pin<GPIOG, 10> PG10;
typedef Pin<GPIOG, 11> PG11;
typedef Pin<GPIOG, 12> PG12;
typedef Pin<GPIOG, 13> PG13;
typedef Pin<GPIOG, 14> PG14;
typedef Pin<GPIOG, 15> PG15;

typedef Pin<GPIOH, 0> PH0;
typedef Pin<GPIOH, 1> PH1;
typedef Pin<GPIOH, 2> PH2;
typedef Pin<GPIOH, 3> PH3;
typedef Pin<GPIOH, 4> PH4;
typedef Pin<GPIOH, 5> PH5;
typedef Pin<GPIOH, 6> PH6;
typedef Pin<GPIOH, 7> PH7;
typedef Pin<GPIOH, 8> PH8;
typedef Pin<GPIOH, 9> PH9;
typedef Pin<GPIOH, 10> PH10;
typedef Pin<GPIOH, 11> PH11;
typedef Pin<GPIOH, 12> PH12;
typedef Pin<GPIOH, 13> PH13;
typedef Pin<GPIOH, 14> PH14;
typedef Pin<GPIOH, 15> PH15;

typedef Pin<GPIOI, 0> PI0;
typedef Pin<GPIOI, 1> PI1;
typedef Pin<GPIOI, 2> PI2;
typedef Pin<GPIOI, 3> PI3;
typedef Pin<GPIOI, 4> PI4;
typedef Pin<GPIOI, 5> PI5;
typedef Pin<GPIOI, 6> PI6;
typedef Pin<GPIOI, 7> PI7;
typedef Pin<GPIOI, 8> PI8;
typedef Pin<GPIOI, 9> PI9;
typedef Pin<GPIOI, 10> PI10;
typedef Pin<GPIOI, 11> PI11;

/******************************************************************************/

template<> class Clock<GPIOA> : public ClockDef<RCC_GPIOA> {};
template<> class Clock<GPIOB> : public ClockDef<RCC_GPIOB> {};
template<> class Clock<GPIOC> : public ClockDef<RCC_GPIOC> {};
template<> class Clock<GPIOD> : public ClockDef<RCC_GPIOD> {};
template<> class Clock<GPIOE> : public ClockDef<RCC_GPIOE> {};
template<> class Clock<GPIOF> : public ClockDef<RCC_GPIOF> {};
template<> class Clock<GPIOG> : public ClockDef<RCC_GPIOG> {};
template<> class Clock<GPIOH> : public ClockDef<RCC_GPIOH> {};
template<> class Clock<GPIOI> : public ClockDef<RCC_GPIOI> {};

template<> class Clock<USART1> : public ClockDef<RCC_USART1> {};
template<> class Clock<USART2> : public ClockDef<RCC_USART2> {};
template<> class Clock<USART3> : public ClockDef<RCC_USART3> {};
template<> class Clock<UART4> : public ClockDef<RCC_UART4> {};
template<> class Clock<UART5> : public ClockDef<RCC_UART5> {};
template<> class Clock<USART6> : public ClockDef<RCC_USART6> {};

template<> class Clock<TIM1> : public ClockDef<RCC_TIM1> {};
template<> class Clock<TIM2> : public ClockDef<RCC_TIM2> {};
template<> class Clock<TIM3> : public ClockDef<RCC_TIM3> {};
template<> class Clock<TIM4> : public ClockDef<RCC_TIM4> {};
template<> class Clock<TIM5> : public ClockDef<RCC_TIM5> {};
template<> class Clock<TIM8> : public ClockDef<RCC_TIM8> {};
//template<> class Clock<TIM9> : public ClockDef<RCC_TIM9> {};
//template<> class Clock<TIM10> : public ClockDef<RCC_TIM10> {};
//template<> class Clock<TIM11> : public ClockDef<RCC_TIM11> {};
//template<> class Clock<TIM12> : public ClockDef<RCC_TIM12> {};
//template<> class Clock<TIM13> : public ClockDef<RCC_TIM13> {};
//template<> class Clock<TIM14> : public ClockDef<RCC_TIM14> {};

/******************************************************************************/

template<> class PinAf<TIM1> : public PinAfDef<GPIO_AF1> {};
template<> class PinAf<TIM2> : public PinAfDef<GPIO_AF1> {};

template<> class PinAf<TIM3> : public PinAfDef<GPIO_AF2> {};
template<> class PinAf<TIM4> : public PinAfDef<GPIO_AF2> {};
template<> class PinAf<TIM5> : public PinAfDef<GPIO_AF2> {};

template<> class PinAf<TIM8> : public PinAfDef<GPIO_AF3> {};
//template<> class PinAf<TIM9> : public PinAfDef<GPIO_AF3> {};
//template<> class PinAf<TIM10> : public PinAfDef<GPIO_AF3> {};
//template<> class PinAf<TIM11> : public PinAfDef<GPIO_AF3> {};

template<> class PinAf<I2C1> : public PinAfDef<GPIO_AF4> {};
template<> class PinAf<I2C2> : public PinAfDef<GPIO_AF4> {};
template<> class PinAf<I2C3> : public PinAfDef<GPIO_AF4> {};

template<> class PinAf<SPI1> : public PinAfDef<GPIO_AF5> {};
template<> class PinAf<SPI2> : public PinAfDef<GPIO_AF5> {};

template<> class PinAf<SPI3> : public PinAfDef<GPIO_AF6> {};

template<> class PinAf<USART1> : public PinAfDef<GPIO_AF7> {};
template<> class PinAf<USART2> : public PinAfDef<GPIO_AF7> {};
template<> class PinAf<USART3> : public PinAfDef<GPIO_AF7> {};

template<> class PinAf<UART4> : public PinAfDef<GPIO_AF8> {};
template<> class PinAf<UART5> : public PinAfDef<GPIO_AF8> {};
template<> class PinAf<USART6> : public PinAfDef<GPIO_AF8> {};

template<> class PinAf<CAN1> : public PinAfDef<GPIO_AF9> {};
template<> class PinAf<CAN2> : public PinAfDef<GPIO_AF9> {};
//template<> class PinAf<TIM12> : public PinAfDef<GPIO_AF9> {};
//template<> class PinAf<TIM13> : public PinAfDef<GPIO_AF9> {};
//template<> class PinAf<TIM14> : public PinAfDef<GPIO_AF9> {};

/******************************************************************************/

template<uint32_t periph, class rxpin, class txpin> class Serial {};

#define ser1(prt,rx0,tx0)		\
	template<> class Serial<prt, rx0, tx0> : public HwSerial<prt, rx0, tx0> {}

#define ser2(prt,rx0,tx0,rx1,tx1)	\
	template<> class Serial<prt, rx0, tx0> : public HwSerial<prt, rx0, tx0> {}; \
	template<> class Serial<prt, rx1, tx0> : public HwSerial<prt, rx1, tx0> {}; \
	template<> class Serial<prt, rx0, tx1> : public HwSerial<prt, rx0, tx1> {}; \
	template<> class Serial<prt, rx1, tx1> : public HwSerial<prt, rx1, tx1> {}

#define ser3(prt,rx0,tx0,rx1,tx1,rx2,tx2)	\
	template<> class Serial<prt, rx0, tx0> : public HwSerial<prt, rx0, tx0> {}; \
	template<> class Serial<prt, rx1, tx0> : public HwSerial<prt, rx1, tx0> {}; \
	template<> class Serial<prt, rx2, tx0> : public HwSerial<prt, rx2, tx0> {}; \
	template<> class Serial<prt, rx0, tx1> : public HwSerial<prt, rx0, tx1> {}; \
	template<> class Serial<prt, rx1, tx1> : public HwSerial<prt, rx1, tx1> {}; \
	template<> class Serial<prt, rx2, tx1> : public HwSerial<prt, rx2, tx1> {}; \
	template<> class Serial<prt, rx0, tx2> : public HwSerial<prt, rx0, tx2> {}; \
	template<> class Serial<prt, rx1, tx2> : public HwSerial<prt, rx1, tx2> {}; \
	template<> class Serial<prt, rx2, tx2> : public HwSerial<prt, rx2, tx2> {}


ser2(USART1, PA10, PA9, PB7, PB6);
ser2(USART2, PA3, PA2, PD6, PD5);
ser3(USART3, PB11, PB10, PC11, PC10, PD9, PD8);
ser2(UART4, PA1, PA0, PC11, PC10);
ser1(UART5, PD2, PC12);
ser2(USART6, PC7, PC6, PG9, PG14);


/******************************************************************************/

template<uint32_t periph, class rxpin, class txpin> class Can {};

#define can2(prt,rx0,tx0,rx1,tx1)	\
	template<> class Can<prt, rx0, tx0> : public HwCan<prt, rx0, tx0> {}; \
	template<> class Can<prt, rx1, tx0> : public HwCan<prt, rx1, tx0> {}; \
	template<> class Can<prt, rx0, tx1> : public HwCan<prt, rx0, tx1> {}; \
	template<> class Can<prt, rx1, tx1> : public HwCan<prt, rx1, tx1> {}

#define can4(prt,rx0,tx0,rx1,tx1,rx2,tx2,rx3,tx3)	\
	can2(prt,rx0,tx0,rx1,tx1);			\
	can2(prt,rx2,tx2,rx3,tx3);			\
	can2(prt,rx0,tx2,rx1,tx3);			\
	can2(prt,rx2,tx0,rx3,tx1)


//can4(CAN1, PA11,PA12,PB8,PB9,PD0,PD1,PI9,PH13);
//can2(CAN2, PB5,PB6,PB12,PB13);

};

#endif /* OPTL_STM32F41X_INCLUDED */

