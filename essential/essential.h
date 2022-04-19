#ifndef __ESSENTIAL_H__ 
#define __ESSENTIAL_H__

#define ENABLE_DEBUG

#ifdef  ENABLE_DEBUG
#define WJ_DEBUG printf("This is line %d of file %s (function %s)\n", \
                        __LINE__, __FILE__, __func__)
#define DEBUG(f_, ...) printf((f_), __VA_ARGS__)

#else

#define WJ_DEBUG
#define DEBUG(f_, ...)

#endif

#endif /* ESSENTIAL_H__ */