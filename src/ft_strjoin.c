#include "../includes/libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
  char *new_str;

  new_str = (char*)malloc(sizeof(char) * (ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1));

  while (*s1)
  {
      *new_str = *s1;
      s1++;
      new_str++;
  }
  while (*s2)
  {
      *new_str = *s2;
      s2++;
      new_str++;
  }
  *new_str = '\0';
  return (new_str);
}
