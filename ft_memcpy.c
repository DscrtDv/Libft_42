#include <stddef.h>
#include <stdio.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    char        *d = (char *) dest;
    const char  *s = (const char *) src;

    while (n--)
        *(d++) = *(s++);

    return (dest);
}

int main(void){

    char str[50] = "wait whaaaat?";
    char dest[50];
    ft_memcpy(dest, str, sizeof(str));
    puts(dest);
    return (0);
}
