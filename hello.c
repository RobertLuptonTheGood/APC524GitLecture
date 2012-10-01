#include <stdio.h>
#include <stdlib.h>

int
main(int ac, const char **av)
{
   const int niter = (ac > 1) ? atoi(av[1]) : 10;

   const char *str = "Hello World";
   printf("What I tell you %d times is true\n", niter);
   for (int i = 0; i < niter; ++i) {
      printf("%d %s\n", i, str);
   }

   return 0;
}
