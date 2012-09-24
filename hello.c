#include <stdio.h>

#define NITER 10

int
main()
{
   const char *str = "Hello World";
   printf("What I tell you %d times is true\n", NITER);
   for (int i = 0; i < NITER; ++i) {
      printf("%d %s\n", i, str);
   }
}
