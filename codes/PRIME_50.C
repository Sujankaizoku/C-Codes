#include<stdio.h>
#include<conio.h>
void main()
{
int a=1,flag=0,b;
clrscr();
printf("All the prime numbers are:\n");
while(a<=50)
{  
 flag=0;
    for(b=1; b<=a; b++)
    {
	 if(a%b==0)
	 {
	 flag++;
	 }
    }
    if(flag==2)
    {
    printf("%d\n",a);
    }
a++;
}
getch();
}