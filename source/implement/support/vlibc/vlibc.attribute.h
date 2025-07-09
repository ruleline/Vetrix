/**
 * @file vlibc.attribute.h
 * @brief Vetrix C Library Attributes.
 * @author ruleline (ruleline@outlook.com)
 * @since 2025-07-10
 *
 * @authors ruleline (ruleline@outlook.com)
 * @date 2025-07-10
 * @version 0.00.001
 *
 * @copyright ©2025 ruleline
 *
 * @ref
 * https://gcc.gnu.org/onlinedocs/gcc/index.html
 * https://gcc.gnu.org/onlinedocs/gcc/Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Function-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Variable-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Type-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Label-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Enumerator-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Statement-Attributes.html
 * https://gcc.gnu.org/onlinedocs/gcc/Attribute-Syntax.html
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |    date    |     author     |             comments
 * ------------ | ---------- | -------------- | --------------------------------
 *   0.00.001   | 2025-07-10 |    ruleline    | initial commit
 * -----------------------------------------------------------------------------
 */

#if !defined VLIBC_ATTRIBUTE_H
#define VLIBC_ATTRIBUTE_H

#define __weak          __attribute__((weak))
#define __unused        __attribute__((unused))
#define __noinline      __attribute__((noinline))
#define __inline        __attribute__((always_inline))
#define __packed        __attribute__((packed))
#define __aligned(x)    __attribute__((aligned(x)))
#define __section(x)    __attribute__((section(x)))

#define __first         __attribute__((constructor))
#define __last          __attribute__((destructor))
#define __ctor(x)       __attribute__((constructor(x)))
#define __dtor(x)       __attribute__((destructor(x)))

#endif /* !defined VLIBC_ATTRIBUTE_H */
