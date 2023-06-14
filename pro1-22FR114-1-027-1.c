#include<stdio.h>
int main(void){
  float a,b;
  printf("a=");
  scanf("%f",&a);
  printf("b=");
  scanf("%f",&b);
  printf("%f\n%f\n%f\n%f\n",a+b,a-b,a*b,a/b);
  return 0;
}
