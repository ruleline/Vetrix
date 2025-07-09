/**
 * @file vlibc.memory.h
 * @brief Vetrix C Library Memories.
 * @author ruleline (ruleline@outlook.com)
 * @since 2025-07-10
 *
 * @authors ruleline (ruleline@outlook.com)
 * @date 2025-07-10
 * @version 0.00.001
 *
 * @copyright ©2025 ruleline
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |    date    |     author     |             comments
 * ------------ | ---------- | -------------- | --------------------------------
 *   0.00.001   | 2025-07-10 |    ruleline    | initial commit
 * -----------------------------------------------------------------------------
 */

#if !defined VLIBC_MEMORY_H
#define VLIBC_MEMORY_H

#include "vetrix.config.h"
#include "vlibc.type.h"

static inline i32 memory_copy(void *output, void *input, usize size)
{
        ASSERT_RETURN_ERROR(output);
        ASSERT_RETURN_ERROR(input);
        ASSERT_RETURN_ERROR(size);

        u8 *in = (u8 *)input;
        u8 *out = (u8 *)output;

        for (usize i = 0; i < size; i++)
                out[i] = in[i];

        return (0);
}

static inline i32 memory_set(void *output, u8 value, usize size)
{
        ASSERT_RETURN_ERROR(output);
        ASSERT_RETURN_ERROR(size);

        u8 *out = (u8 *)output;

        for (usize i = 0; i < size; i++)
                out[i] = value;

        return (0);
}

static inline i32 memory_clear(void *output, usize size)
{
        return memory_set(output, 0, size);
}

static inline i32 memory_compare(void *output, void *input, usize size)
{
        ASSERT_RETURN_ERROR(output);
        ASSERT_RETURN_ERROR(input);
        ASSERT_RETURN_ERROR(size);

        u8 *in = (u8 *)input;
        u8 *out = (u8 *)output;

        for (usize i = 0; i < size; i++) {
                if (out[i] != in[i])
                        return (-1);
        }

        return (0);
}

#endif /* !defined VLIBC_MEMORY_H */
