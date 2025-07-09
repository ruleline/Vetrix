/**
 * @file vlibc.type.h
 * @brief Vetrix C Library Types.
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

#if !defined VLIBC_TYPE_H
#define VLIBC_TYPE_H

typedef _Bool                   bool;

typedef char                    i8;
typedef short int               i16;
typedef int                     i32;
typedef long long int           i64;
typedef long int                isize;

typedef unsigned char           u8;
typedef unsigned short int      u16;
typedef unsigned int            u32;
typedef unsigned long long int  u64;
typedef unsigned long int       usize;

typedef float                   f32;
typedef double                  f64;

#endif /* !defined VLIBC_TYPE_H */
