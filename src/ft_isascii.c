int     ft_isascii(int c)
{
  if (c >= 0 && c <= 0177)
    return (c);
  return (0);
}
