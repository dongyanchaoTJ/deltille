/**
* Copyright (C) 2017-present, Facebook, Inc.
*
* This library is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 2.1 of the License, or (at your option) any later version.
*
* This library is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with this library; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

// These codes were generated by TagFamilyGenerator.java from Ed Olson

// tag16h5Codes : 16 bits, minimum Hamming distance 5, minimum complexity 5

#pragma once

namespace AprilTags {

const unsigned long long t16h5_other[] = {
    0x231bLL, 0x2ea5LL, 0x346aLL, 0x45b9LL, 0x6857LL, 0x7f6bLL,
    0xad93LL, 0xb358LL, 0xb91dLL, 0xe745LL, 0x156dLL, 0xd3d2LL,
    0xdf5cLL, 0x4736LL, 0x8c72LL, 0x5a02LL, 0xd32bLL, 0x1867LL,
    0x468fLL, 0xdc91LL, 0x4940LL, 0xa9edLL, 0x2bd5LL, 0x599aLL,
    0x9009LL, 0x61f6LL, 0x3850LL, 0x8157LL, 0xbfcaLL, 0x987cLL};

static const OurTagCodes tagCodes16h5_other = OurTagCodes(
    "t16h5o", 16, 5, t16h5_other, sizeof(t16h5_other) / sizeof(t16h5_other[0]));
}
