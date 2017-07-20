#include<stdio.h>
int main()
{
 int rev=0,num,rem;
 scanf("%d",&num);
 while(num>=1)
 {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
 }
 printf("%d",rev);
}
