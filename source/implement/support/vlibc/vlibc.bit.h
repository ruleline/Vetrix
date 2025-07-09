/**
 * @file vlibc.bit.h
 * @brief Vetrix C Library Bits.
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

#if !defined VLIBC_BIT_H
#define VLIBC_BIT_H

#include "vetrix.config.h"
#include "vlibc.type.h"

static inline i32 bit_get(usize *output, u8 position, bool *value)
{
        ASSERT_RETURN_ERROR(output);
        ASSERT_RETURN_ERROR(value);

        *value = !!((*output) & (1 << position));
        return (0);
}

static inline i32 bit_set(usize *output, u8 position, bool value)
{
        ASSERT_RETURN_ERROR(output);

        if (value)
                *output |= (1 << position);
        else
                *output &= ~(1 << position);

        return (0);
}

static inline i32 bit_toggle(usize *output, u8 position)
{
        ASSERT_RETURN_ERROR(output);

        *output ^= (1 << position);
        return (0);
}

#endif /* !defined VLIBC_BIT_H */
