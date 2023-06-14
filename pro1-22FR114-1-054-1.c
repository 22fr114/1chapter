#include<stdio.h>
#include<stdio.h>
int main(void){
  float pi,r,d,L,v1,v2;
  pi=3.14;
  d=0.001;
  L=71*1.0/100;
  r=6400000;
  v1=r*r*pi*d;
  v2=r*r*pi*d*L;
  printf("%f\n%f\n",v1,v2);
  return 0;
}
  
  
