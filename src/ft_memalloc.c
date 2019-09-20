#include "../includes/libft.h"
void    *ft_memalloc(size_t size)
{
  char *new_mem;

  new_mem = (char *)malloc(sizeof(char) * (size + 1));
  if (new_mem == NULL)
    return ((char*)NULL);

  while (size)
  {
    *(new_mem++) = 0;
    size--;
  }
  *new_mem = '\0';
  return (0);
}
