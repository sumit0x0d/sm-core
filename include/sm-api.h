#ifndef SM_API_H
#define SM_API_H

#if defined(_WIN32)
#define SM_API __declspec(dllexport)
#elif defined(__GNUC__) || defined(__clang__)
#define SM_API __attribute__((visibility("default")))
#else
#define SM_API
#endif /* _WIN32 */

#endif /* SM_API_H */
