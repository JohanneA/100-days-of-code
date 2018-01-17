unsigned my_strlcpy(char *dst, const char *src, unsigned n) {
  const char *s = src
  while((*dst++ = *s++) && --n != 0)
  if(n == 0) {
    
  }
  return (s - src - 1);
}
