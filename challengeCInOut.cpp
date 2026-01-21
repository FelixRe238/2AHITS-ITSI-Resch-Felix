#include <stdio.h>

int main()
{
 int b;
 int sum = 0;

 while(scanf("%d", &b) == 1)
   {
     sum += b;
   }

printf("%d", sum);

return 0;
}