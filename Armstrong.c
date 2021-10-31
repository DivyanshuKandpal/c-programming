// program to find armstrong number using if else 
#include<stdio.h>  
 int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
  // using while loop
while(n>0)    
{    
r=n%10;    
sum=sum+(r*r*r);    
n=n/10;    
}    
  // using if else statement
if(temp==sum)    
printf("This is armstrong  number ");    
else    
printf("This is not armstrong number");    
return 0;  
}   
