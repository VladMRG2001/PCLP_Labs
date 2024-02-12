#include <stdio.h>

int main()
{
  int n, v[100], i=1, j;
  printf("Pentru cate numere sa se realizeze programul?: ");
  scanf("%d", &n);
  printf("Cititi primul numar: ");
  scanf("%d", &v[i]);

  for (i = 2; i <= n; i++)
  {
    printf("Cititi al %d-lea numar: ", i);
    scanf("%d", &v[i]);
  }

  printf("Sumele posibile formate intre numerele alese precedent sunt: \n");
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= n; j++)
    {
      if ((v[i] != v[j]) && (v[i] < v[j]))
        printf("%d + %d = %d\n", v[i], v[j], v[i] + v[j]);
    }
  }

  return 0;
}

