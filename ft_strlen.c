#include <stdio.h>
size_t  ft_strlen(const char *str)
{
    size_t  len;

    len = 0;
    while (*str != 0)
    {
        str++;
        len++;
    }
    return len;
}

int main(void){
    
    char *str = "hello \0 world!";
    printf("size of string /%s/ is: %ld \n",str , ft_strlen(str));
    printf("size of string built in /%s/ is: %ld \n",str , strlen(str));
    return 0;
}
