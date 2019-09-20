#include "../includes/libft.h"

char *ft_strnew(size_t size)
{
  char *new_str;

  new_str = (char *)malloc(sizeof(char) * (size + 1));
  if (new_str == NULL)
    return ((char*)NULL);
  
  while (size)
  {
    *(new_str++) = '\0';
    size--;
  }
  *new_str = '\0';
  return (new_str);
}
