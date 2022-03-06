#include <stdio.h>
#include<conio.h>
int main()
{
    int digit,n;
    int rev=0,temp;
    printf("Enter a Number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        digit=temp%10;
        rev=rev*10+digit;
        temp=temp/10;
    }
    if(rev==n)
    {
        printf("Entered Number is a Palindrome Number");
        
    }
    else
    {
     printf("Entered Number is not a Palindrome Number");   
    }
    
    
        getch();
    return 0;
}