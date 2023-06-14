#include<stdio.h>
#include<math.h>
int main(void){
  int a,b,c,d;
  scanf("%d",&a);
  b=a%100;

  printf("%d\n",a/100);
  printf("%d\n",b/10);
  printf("%d\n",b%10);

  return 0;
}
