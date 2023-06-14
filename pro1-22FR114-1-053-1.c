#include<stdio.h>
#include<math.h>
int main(void){
  float a,b,c,x1,x2;
  scanf("%f",&a);
  scanf("%f",&b);
  scanf("%f",&c);
  x1=-b+sqrt(b*b-4*a*c)/2*a;
  x2=-b-sqrt(b*b-4*a*c)/2*a;
  printf("%f\n%f\n",x1,x2);
  return 0;
}
  
  
  
  
  
