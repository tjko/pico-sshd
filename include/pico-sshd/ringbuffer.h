/* ringbuffer.h
   Copyright (C) 2025 Timo Kokkonen <tjko@iki.fi>

   SPDX-License-Identifier: GPL-3.0-or-later

   This file is part of pico-sshd

   pico-sshd is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   pico-sshd is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with pico-sshd. If not, see <https://www.gnu.org/licenses/>.
*/

#ifndef PICO_SSHD_RINGBUFFER_H
#define PICO_SSHD_RINGBUFFER_H 1

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif


typedef struct ssh_ringbuffer_t {
	uint8_t *buf;
	bool free_buf;
	size_t size;
	size_t free;
	size_t head;
	size_t tail;
} ssh_ringbuffer_t;


int ssh_ringbuffer_init(ssh_ringbuffer_t *rb, void *buf, size_t size);
int ssh_ringbuffer_destroy(ssh_ringbuffer_t *rb);
int ssh_ringbuffer_flush(ssh_ringbuffer_t *rb);
size_t ssh_ringbuffer_used(const ssh_ringbuffer_t *rb);
size_t ssh_ringbuffer_free(const ssh_ringbuffer_t *rb);
size_t ssh_ringbuffer_offset(ssh_ringbuffer_t *rb, size_t offset, size_t delta, int direction);
int ssh_ringbuffer_add(ssh_ringbuffer_t *rb, const void *data, size_t len, bool overwrite);
int ssh_ringbuffer_read(ssh_ringbuffer_t *rb, uint8_t *ptr, size_t size);
int ssh_ringbuffer_read_char(ssh_ringbuffer_t *rb);
int ssh_ringbuffer_add_char(ssh_ringbuffer_t *rb, uint8_t ch, bool overwrite);
size_t ssh_ringbuffer_peek(ssh_ringbuffer_t *rb, void **ptr, size_t size);


#ifdef __cplusplus
}
#endif

#endif /* PICO_SSHD_RINGBUFFER_H */
