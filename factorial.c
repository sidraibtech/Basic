#include<stdio.h>  
void main()    
{    
 int i,n,fact=1;    
 printf(" Please enter a number to find factorial : ");    
 scanf("%d",&n);    
 for(i=1;i<=n;i++)
 {    
    fact=fact*i;    
 }    
  printf("The factorial of number %d is = %d",n,fact);    
}   
