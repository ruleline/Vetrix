/**
 * @file vetrix_config.h
 * @brief Vetrix Configurations.
 * @author ruleline (ruleline@outlook.com)
 * @since 2025-07-10
 *
 * @authors ruleline (ruleline@outlook.com)
 * @date 2025-07-10
 * @version 0.00.010
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

#if !defined VETRIX_CONFIG_H
#define VETRIX_CONFIG_H

#define LAST_SLASH(p) (__builtin_strrchr(p, '/'))
#define FILE_NAME (LAST_SLASH(__FILE__) ? LAST_SLASH(__FILE__) + 1 : __FILE__)
#define LINE_NUM __LINE__
#define FUNC_NAME __func__
#define DATE __DATE__
#define TIME __TIME__
#define LINE_BREAK "\n"
#define PREFIX "[%s][%s] %s:%d %s(): "
#define PRINTF(x, ...)                                  \
                do {                                    \
                        printf(PREFIX x LINE_BREAK,     \
                                DATE, TIME, FILE_NAME, LINE_NUM, FUNC_NAME,     \
                                ##__VA_ARGS__);         \
                } while(0)
#if (DEBUG == 1)
#define PRINT(x, ...)                                   \
                do {                                    \
                        printf(PREFIX x LINE_BREAK,     \
                                DATE, TIME, FILE_NAME, LINE_NUM, FUNC_NAME,     \
                                ##__VA_ARGS__);         \
                } while(0)
#define ASSERT(x)                                       \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#define ASSERT_NO_RETURN(x)                             \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#define ASSERT_RETURN_FALSE(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#define ASSERT_RETURN_ERROR(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#elif (RELEASE == 1)
#define PRINT(x, ...)                                   \
                do {                                    \
                        printf(PREFIX x LINE_BREAK,     \
                                DATE, TIME, FILE_NAME, LINE_NUM, FUNC_NAME,     \
                                ##__VA_ARGS__);         \
                } while(0)
#define ASSERT_NO_RETURN(x)                             \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                return;                 \
                        }                               \
                } while(0)
#define ASSERT_RETURN_FALSE(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                return (0);             \
                        }                               \
                } while(0)
#define ASSERT_RETURN_ERROR(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                return (-1);            \
                        }                               \
                } while(0)
#elif (TEST == 1)
#define PRINT(x, ...)                                   \
                do {                                    \
                        printf(PREFIX x LINE_BREAK,     \
                                DATE, TIME, FILE_NAME, LINE_NUM, FUNC_NAME,     \
                                ##__VA_ARGS__);         \
                } while(0)
#define ASSERT_NO_RETURN(x)                             \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#define ASSERT_RETURN_FALSE(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#define ASSERT_RETURN_ERROR(x)                          \
                do {                                    \
                        if (!(x)) {                     \
                                PRINT("[ASSERT] " #x);  \
                                for (;;);               \
                        }                               \
                } while(0)
#else /* ((DEBUG != 1) && (RELEASE != 1) && (TEST != 1)) */
#error "please define DEBUG, RELEASE or TEST"
#endif /* ((DEBUG == 1) || (RELEASE == 1) || (TEST == 1)) */

enum ITEM_PRIORITY {
        ITEM_MINIMUM_UNREACHABLE_PRIORITY = 100,
        ITEM_MAXIMUM_UNREACHABLE_PRIORITY = 65536,
};

#endif /* !defined VETRIX_CONFIG_H */
