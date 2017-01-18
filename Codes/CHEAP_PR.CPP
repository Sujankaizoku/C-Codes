#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int a;
printf("Enter a number: ");
scanf("%d", &a);

if(a == 1 || a == 2 || a == 3){
 printf("The no is prime");

}
else if(a%2 == 0 || a%3 == 0)
{
 printf("the no is not prime");

}
else{
 printf("the no is not prime");


}

getch();
}