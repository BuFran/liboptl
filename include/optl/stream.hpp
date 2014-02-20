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

#ifndef OPTL_STREAM_INCLUDED
#define OPTL_STREAM_INCLUDED

namespace OPTL
{

template<class stream>
class BlockingStream
{
public:
	OPTL_INLINE
	void write(uint8_t ch)
	{
		while (!stream::is_write_ready());
		stream::write(ch);
	}

	OPTL_INLINE
	uint8_t read()
	{
		while (!stream::is_read_ready());
		return stream::read();
	}
};

template<class stream>
class BufferedStream
{
public:
	OPTL_INLINE
	void write(uint8_t ch)
	{
	}

	OPTL_INLINE
	uint8_t read()
	{
		return 0;
	}
};

};

#endif /* OPTL_STREAM_INCLUDED */

