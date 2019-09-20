#include "../includes/libft.h"
char    *ft_strmap(char const *s, char (*f)(char))
{
  int size;
  int i;
  char *new_str;

  size = ft_strlen((char*)s);
  i = 0;
  new_str = (char *)malloc(sizeof(char) * (size + 1));
  while (s[i])
  {
      new_str[i] = f(s[i]);
      i++;
  }
  return (new_str);
}

