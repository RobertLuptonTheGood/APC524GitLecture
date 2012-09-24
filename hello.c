#include <stdio.h>

int i;					/* an integer */
const char *str = "Goodbye Universe";

int
main()
{
   printf("What I tell you %d times is true\n", 10);
   for (i = 0; i < 10; ++i) {
      printf("%d %s\n", i, str);
   }
}
