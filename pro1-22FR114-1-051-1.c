#include<stdio.h>
#include<math.h>
int main(void){
  float x1,y1,x2,y2,l;
  scanf("%f",&x1);
  scanf("%f",&y1);
  scanf("%f",&x2);
  scanf("%f",&y2);
  l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  printf("%f\n",l);
  return 0;
}
