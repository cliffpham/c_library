#include "../includes/libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *copy;
    int i;

    copy = b;
    i = 0;

    while (i < (int)len){
      copy[i] = (unsigned char)c;
      i++;
    }
    return (b);
}
    
