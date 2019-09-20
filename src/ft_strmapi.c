#include "../includes/libft.h"
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  int size;
  int i;
  char *new_str;

  size = ft_strlen((char*)s);
  i = 0;
  new_str = (char *)malloc(sizeof(char) * (size + 1));
  if (!s || !new_str)
    return (NULL);
  while (s[i])
  {
      new_str[i] = f(i, s[i]);
      i++;
  }
  return (new_str);
}

