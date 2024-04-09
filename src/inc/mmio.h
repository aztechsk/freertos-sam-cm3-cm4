/*
 * mmio.h
 *
 * Copyright (c) 2024 Jan Rusnak <jan@rusnak.sk>
 *
 * Permission to use, copy, modify, and distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef MMIO_H
#define MMIO_H

#if defined(MCU_AT91SAM3S4B)
 #if !defined(__SAM3S4B__)
  #define __SAM3S4B__
 #endif
#elif defined(MCU_AT91SAM3N2C)
 #if !defined(__SAM3N2C__)
  #define __SAM3N2C__
 #endif
#elif defined(MCU_AT91SAM4N8B)
 #if !defined(__SAM4N8B__)
  #define __SAM4N8B__
 #endif
#elif defined(MCU_AT91SAM4N8C)
 #if !defined(__SAM4N8C__)
  #define __SAM4N8C__
 #endif
#elif defined(MCU_AT91SAM4S2A)
 #if !defined(__SAM4S2A__)
  #define __SAM4S2A__
 #endif
#else
 #error "MCU type symbolic constant not defined"
#endif

#include "sam.h"

#endif
