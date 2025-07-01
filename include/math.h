#pragma once

#ifdef __cplusplus
#	define CPP_COMPATIBLE extern "C"
#else
#	define CPP_COMPATIBLE /* nothing */
#endif // __cplusplus

CPP_COMPATIBLE int get_square(int x);
