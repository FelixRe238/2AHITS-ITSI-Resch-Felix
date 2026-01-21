#include <stdio.h>

int main()
{
int n = 0;
int var = 0;
int erg = 0;
scanf("%d", &n);
for(int i = 0; i < n; i++)
  {
    scanf("%d", &var);
    erg = var + erg;
  }
printf("%d\n", erg);
  return 0;
}