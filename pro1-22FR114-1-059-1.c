#include<stdio.h>
#include<math.h>
int main(void){
  float x1,x2,x3,y1,y2,y3,l1,l2,l3;
  scanf("%f",&x1);
  scanf("%f",&y1);
  scanf("%f",&x2);
  scanf("%f",&y2);
  scanf("%f",&x3);
  scanf("%f",&y3);

  l1=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
  l2=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
  l3=sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));

  printf("%f\n%f\n%f\n",l1,l2,l3);
  return 0;
}
  
  
  
  
