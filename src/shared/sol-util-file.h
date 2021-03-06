/*
 * This file is part of the Soletta Project
 *
 * Copyright (C) 2015 Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of Intel Corporation nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once

#include "sol-macros.h"

#include <sys/types.h>
#include <stdarg.h>

#define CHUNK_SIZE 4096
#define SOL_UTIL_MAX_READ_ATTEMPTS 10

int sol_util_write_file(const char *path, const char *fmt, ...) SOL_ATTR_PRINTF(2, 3);
int sol_util_vwrite_file(const char *path, const char *fmt, va_list args) SOL_ATTR_PRINTF(2, 0);
int sol_util_read_file(const char *path, const char *fmt, ...) SOL_ATTR_SCANF(2, 3);
int sol_util_vread_file(const char *path, const char *fmt, va_list args) SOL_ATTR_SCANF(2, 0);
void *sol_util_load_file_raw(const int fd, size_t *size) SOL_ATTR_WARN_UNUSED_RESULT;
char *sol_util_load_file_string(const char *filename, size_t *size) SOL_ATTR_WARN_UNUSED_RESULT;
int sol_util_get_rootdir(char *out, size_t size) SOL_ATTR_WARN_UNUSED_RESULT;
int sol_util_fd_set_flag(int fd, int flag) SOL_ATTR_WARN_UNUSED_RESULT;
ssize_t sol_util_fill_buffer(const int fd, char *buffer, const size_t buffer_size, size_t *size_read);
