#include "../includes/libft.h"

char *ft_strdup(char *s, size_t n)
{
  int i;
  char *dup;

  i = 0;
  dup = (char *)malloc(sizeof(char) * (n + 1));
  if (dup == NULL)
    return ( (char *)NULL);

  while (s[i] != '\0')
  {
    dup[i] = s[i];
    i++;
  }
  dup[i] = 0;
  return(dup);
}

  

  

