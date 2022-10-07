#include <stddef.h>

void   *ft_memset(void *s, int c, size_t n)
{
    unsigned char   *temp;
    
    temp = s;
    while (n--)
        *temp++ = (unsigned char) c;
    return s;
}
