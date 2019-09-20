#include "../includes/libft.h"
char    *ft_strncpy(char *dst, const char *src, size_t len)
{
  char *ptr;

  ptr = dst;
  if (dst == NULL){
    return NULL;
  }

  while(*src && len){
    *dst = *src;
    dst++;
    src++;
    len--;
  }
  *dst = '\0';
  return (ptr);
}
  
