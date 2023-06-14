#include<stdio.h>
#include<string.h>
int main(void){
  int i;
  char q;
  printf("小文字＝");
  scanf("%c",&q);
  printf("%x\n",q);
  for(i=0;i<=strlen(q);i++)
    printf("%c\n",q);
  printf("%x\n",q);
  return 0;
}


