#include<stdio.h>
int main(void){
  char a,b;
  scanf("%c",&a);
  b=a-('a'-'A');
  printf("%c\n%x\n%x\n",b,a,b);
  
  return 0;
}
  
