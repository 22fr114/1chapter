#include<stdio.h>
#include<math.h>
int main(void){
  int a,b;
  double x,y;
  printf("a=");
  scanf("%d",&a);
  printf("b=");
  scanf("%d",&b);
  printf("a/b=%dremainder%lf\n",a/b,fmod(a,b));
  return 0;
}
