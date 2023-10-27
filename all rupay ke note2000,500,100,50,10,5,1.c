#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h;
	printf("enter the amount=");
	scanf("%d",&a);
	b=a/2000;                                      
	c=(a%2000)/500;
	d=((a%2000)%500)/100;
	e=(((a%2000)%500)%100)/50;
	f=((((a%2000)%500)%100)%50)/10;
	g=(((((a%2000)%500)%100)%50)%10)/5;
	h=((((((a%2000)%500)%100)%50)%10)%5)/1;
	printf("2000 notes=%d\n",b);
	printf("500 notes=%d\n",c);
	printf("100 notes=%d\n",d);
	printf("50 notes=%d\n",e);
	printf("10 notes=%d\n",f);
	printf("5 notes=%d\n",g);
	printf("1 notes=%d\n",h);
	
	return 0;
}
//output:-

