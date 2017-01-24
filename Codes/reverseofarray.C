#include<stdio.h>
#define MAX 30
int main()
{
int arr[MAX],num,i=0,j,temp;
printf("Enter a size of an array:");
scanf("%d",&num);
printf("Enter %d integers into array:",num);
while(i<num)
{
scanf("%d",&arr[i]);
i++;
}
printf("Original Array is:");
for(j=0; j<num; j++)
{
printf("%d ",arr[j]);
}
i=0;; //i will be pointing to last element
j=num-1;	//j will be pointing to first element                  
while(i<j)
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
i++;
j--;
}
printf("\n");
printf("The reverse array is : ");
for(i=0; i<num; i++)
{
printf(" %d",arr[i]);
}
return 0;
}

