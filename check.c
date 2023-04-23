#include <stdio.h>
int main(){
  int x;
  printf("请输入数字.\n");
  scanf("%d",&x);
  if(x%2==0)
  {
   printf("She is a girl!!!\n");
  }else
  {
   printf("He is a boy!!!\n");
  }
  return 0;
}