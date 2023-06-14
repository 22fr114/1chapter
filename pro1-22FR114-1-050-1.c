#include<stdio.h>
#include<math.h>
int main(void){
  float x,y;
  printf("x座標＝");
  scanf("%f",&x);
  printf("y座標＝");
  scanf("%f",&y);
  printf("%f\n",sqrt(x*x+y*y));
  return 0;
}
