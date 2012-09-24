#include <stdio.h>

#define NITER 10

int i;					/* an integer */
const char *str = "Hello World";

int
main()
{
   printf("What I tell you %d times is true\n", NITER);
   for (i = 0; i < NITER; ++i) {
      printf("%d %s\n", i, str);
   }
}
