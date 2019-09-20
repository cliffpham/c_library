#include "../includes/libft.h"
char    *ft_strcpy(char *dst, const char *src)
{
  char *ptr;

  ptr = dst;
  if (dst == NULL){
    return NULL;
  }

  while(*src){
    *ptr = *src;
    ptr++;
    src++;
  }
  *ptr = '\0';
  return (ptr);
}
  
