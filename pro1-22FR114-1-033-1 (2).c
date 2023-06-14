#include<stdio.h>
#include<math.h>
int main(void){
  float s;
  printf("s=");
  scanf("%f",&s);
  printf("%lf",pow(s,2));
  printf("%lf",sqrt(s));
  printf("%lf",log(s));
  printf("%lf",log10(s));
  return 0;
}
