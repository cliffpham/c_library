#include "../includes/libft.h"

int     strequ(char const *s1, char const *s2)
{
  if (!s1 || !s2)
    return (0);
  if (ft_strlen((char*)s1) != ft_strlen((char*)s2))
    return (0);
  while (s1 && s2)
  {
    if (*s1 != *s2)
      return (0);
    s1++;
    s2++;
  }
  return (1);
}
