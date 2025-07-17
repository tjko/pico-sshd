/* log.h
   Copyright (C) 2025 Timo Kokkonen <tjko@iki.fi>

   SPDX-License-Identifier: GPL-3.0-or-later

   This file is part of pico-sshd Library.

   pico-sshd Library is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   pico-sshd Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with pico-sshd Library. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef _PICO_SSHD_LOG_H_
#define _PICO_SSHD_LOG_H_

#ifdef __cplusplus
extern "C"
{
#endif


/* Syslog Priorities */

#define LOG_EMERG     0
#define LOG_ALERT     1
#define LOG_CRIT      2
#define LOG_ERR       3
#define LOG_WARNING   4
#define LOG_NOTICE    5
#define LOG_INFO      6
#define LOG_DEBUG     7

void ssh_server_log_level(int priority);


#ifdef __cplusplus
}
#endif

#endif /* _PICO_SSHD_LOG_H_ */
