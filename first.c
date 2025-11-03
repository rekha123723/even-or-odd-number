#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the value: ");
scanf("%d",&n);
if(n%2==0)
{
printf("The given num %dis even",n);  
}
else
{
printf("The given num %d is odd ",n);   
}
getch();
}