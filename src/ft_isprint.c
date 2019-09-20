int     ft_isprint(int c)
{
  if (c >= 040 && c <= 176)
    return (c);
  return (0);
}
