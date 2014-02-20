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

#ifndef OPTL_CONSOLE_INCLUDED
#define OPTL_CONSOLE_INCLUDED

#include <stddef.h>

namespace OPTL
{

static const char * const hexchars = "0123456789ABCDEF";

template<class stream>
class Console
{
public:
	OPTL_NOINLINE
	void putbuf(const uint8_t *buf, size_t len)
	{
		while (len-- > 0)
			stream::write(*buf++);
	}

	OPTL_NOINLINE
	void puts(const char *str)
	{
		while (*str)
			stream::write(*str++);
	}

	OPTL_NOINLINE
	void puthex8(uint8_t val)
	{
		stream::write(hexchars[(val >> 4) & 0x0F]);
		stream::write(hexchars[(val >> 0) & 0x0F]);
	}

	OPTL_NOINLINE
	void puthex16(uint16_t val)
	{
		stream::write(hexchars[(val >> 12) & 0x0F]);
		stream::write(hexchars[(val >> 8) & 0x0F]);
		stream::write(hexchars[(val >> 4) & 0x0F]);
		stream::write(hexchars[(val >> 0) & 0x0F]);
	}

	OPTL_NOINLINE
	void puthex32(uint32_t val)
	{
		stream::write(hexchars[(val >> 28) & 0x0F]);
		stream::write(hexchars[(val >> 24) & 0x0F]);
		stream::write(hexchars[(val >> 20) & 0x0F]);
		stream::write(hexchars[(val >> 16) & 0x0F]);
		stream::write(hexchars[(val >> 12) & 0x0F]);
		stream::write(hexchars[(val >> 8) & 0x0F]);
		stream::write(hexchars[(val >> 4) & 0x0F]);
		stream::write(hexchars[(val >> 0) & 0x0F]);
	}

	OPTL_NOINLINE
	void putdec32(uint32_t val)
	{
		uint8_t buf[11];
		int i=0;
		while (val != 0) {
			buf[i++] = val % 10;
			val /= 10;
		}

		if (i == 0)
			buf[i++] = 0;

		while (i > 0)
			stream::write(hexchars[buf[--i]]);
	}
};

};
#endif /* OPTL_CONSOLE_INCLUDED */
