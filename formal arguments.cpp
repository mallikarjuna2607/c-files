#include<stdio.h>
int addition(); //function declaration
int main()
{
	int result;
	result=addition();
	printf("\n %d",result);  //function calling
	return 0;
}
    int addition() //function defination
{
	int a,b,c;
	printf("\n Enter a and b values");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
