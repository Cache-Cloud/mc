#include <stdio.h>
int main()
{
	char grade;
    printf("请输入评级：");
	scanf("%c",&grade);
	printf("Your score:");
	switch(grade)
	{
	case 'A': printf("85～100\n");break;
	case 'B': printf("70～84\n");break;
	case 'C': printf("60～69\n");break;
	case 'D': printf("<60\n");break;    
	default:  printf("enter data error!\n");
	}
	return 0;
}
