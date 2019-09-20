#include "includes/libft.h"
#include <string.h>

void printArray(int arr[], int n)
{
   for (int i=0; i<n; i++)
      printf("%d ", arr[i]);
}

int main()
{
  char str[50] = "GeeksForGeeks is for programming geeks.";
  printf("\nBefore memset(): %s\n", str);

  // Fill 8 characters starting from str[13] with '.'
  ft_memset(str, '.', 4*sizeof(char));

  printf("After memset():  %s\n", str);
  
  char dst[50] = {0};
  ft_memcpy(dst, str, sizeof(str));
  printf("Dst is: %s\n", dst);
  char test[50] = {0};
  printf("This is ft_strcpy: %s\n", ft_strcpy(test, str));
  char test2[50] = {0};
  printf("This is ft_strncpy: %s\n", ft_strncpy(test2, test, 5*sizeof(char)));
  char *test3 = (char*)calloc(100,1);
//  test3 = ft_strcat(test3, "concat t#his first ");
  ft_strcat(test3, "concating ");
  ft_strcat(test3, "this ");
  puts(test3);

  printf("%c\n", ft_tolower('M'));
  printf("%c\n", ft_toupper('m'));
  printf("%c\n", ft_toupper('#'));
  printf("%c\n", ft_isprint('$'));
  printf("%c\n", ft_isascii('3'));
  printf("%c\n", ft_isalnum('0'));
  printf("%c\n", ft_isalnum('$'));

  return (0);
}
