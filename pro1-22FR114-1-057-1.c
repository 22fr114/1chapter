#include<stdio.h>
int main(void){
  float xa,xb,ya,yb,s;
  scanf("%f",&xa);
  scanf("%f",&ya);
  scanf("%f",&xb);
  scanf("%f",&yb);
  s=1.0/2*(xa*yb-xb*ya);
  printf("%f\n",s);
  return 0;
}
  
