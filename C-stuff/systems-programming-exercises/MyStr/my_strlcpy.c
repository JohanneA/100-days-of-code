unsigned my_strlcpy(char *dst, const char *src, unsigned n) {
 int i = 0;
 while((dst[i] = src[i]) != '\0' && i < (n - 2)) {
   i++;
 }

 if(i == n - 2) {
   dst[i] = '\0'
 }
 return i;
}
