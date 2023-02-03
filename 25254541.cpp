#include <stdio.h>

int main() {//129
  int n,n1,n2,sum;
  printf("enter number");
  scanf("%d",&n);
  printf("%d  ",n1);
  printf("%d  ",n2);
  while(n>0)
  {
      sum=n1+n2;
      printf("%d  ",sum);
  n1=n2;
  n2=sum;
     n--;
  }
 return 0;
}
