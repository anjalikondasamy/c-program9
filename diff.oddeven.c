#include <stdio.h>
#include<conio.h>
int main() 
{
	int a,b,sum;
  clrscr();
	scanf("%d %d",&a,&b);
	sum=a-b;
	if(sum%2==0)
  {
	printf("even");
  }
	else
  {
	printf("odd");
  }
}
