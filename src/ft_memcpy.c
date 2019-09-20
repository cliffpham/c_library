#include "../includes/libft.h"

void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  char *c_dst;
  char *c_src;

  c_dst = (char*)dst;
  c_src = (char*)src;

  while (n)
  {
    *(c_dst++) = *(c_src++);
    n--;
  }
  return (0);
}

  

