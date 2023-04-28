#include <stdio.h>
int main(){
  float a,b,c;
  printf("请输入两个小数，中间用逗号隔开!\n");
  scanf("%f,%f",&a,&b);

  if(a>b){
	c=a;
	a=b;
	b=c;
  }

  printf("%5.2f,%5.2f\n",a,b);	
  
  return 0;
}