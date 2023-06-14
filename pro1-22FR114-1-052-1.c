#include<stdio.h>
#include<math.h>
int main(void){
  float x,y,r,s;
  scanf("%f",&x);
  scanf("%f",&y);
  r=sqrt(x*x+y*y);
  s=r*r*M_PI;
  printf("%f\n",s);
  return 0;
}
  
  
