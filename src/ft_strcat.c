#include "../includes/libft.h"

char    *ft_strcat(char *restrict s1, const char *restrict s2)
{
  char *ptr;

  ptr = s1 + ft_strlen(s1);
  while (*s2 != '\0')
  {
    *ptr = *s2;
    ptr++;
    s2++;
  }
  *ptr = '\0';
  return (ptr);
}
