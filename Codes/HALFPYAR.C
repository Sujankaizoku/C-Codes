#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
for(a=1; a<10; a++)
{
	printf("\n");
	for(b=1; b<=a; b++)
	{
	printf("%d",b);
	}

}
getch();
}