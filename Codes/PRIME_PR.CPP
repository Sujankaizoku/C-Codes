#include<stdio.h>
#include<conio.h>
void main(){
 clrscr();
 int a,b,count = 0;

 for(a = 2; a<=50; a++)
 {
        count=0;
	for(b = 1; b<=a; b++){
		if(a%b == 0){
		count++;
		}
	}
   if(count == 2)
   {
   printf("%d \n", a);
   }
 }

 getch();
}