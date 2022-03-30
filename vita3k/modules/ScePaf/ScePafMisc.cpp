// Vita3K emulator project
// Copyright (C) 2021 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#include "ScePafMisc.h"

EXPORT(int, scePafGetCurrentClockLocalTime) {
    return UNIMPLEMENTED();
}

EXPORT(int, scePafSha1Init) {
    return UNIMPLEMENTED();
}

EXPORT(int, scePafSha1Result) {
    return UNIMPLEMENTED();
}

EXPORT(int, scePafSha1Update) {
    return UNIMPLEMENTED();
}

EXPORT(int, sce_paf_misc_does_file_exist) {
    return UNIMPLEMENTED();
}

BRIDGE_IMPL(scePafGetCurrentClockLocalTime)
BRIDGE_IMPL(scePafSha1Init)
BRIDGE_IMPL(scePafSha1Result)
BRIDGE_IMPL(scePafSha1Update)
BRIDGE_IMPL(sce_paf_misc_does_file_exist)
