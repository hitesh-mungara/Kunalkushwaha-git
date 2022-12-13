#include<stdio.h>
int main()
{
    int a=2;
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    while(a<=n){
        if(n%a==0){
            if(a==n){
                
                printf("It is a prime number");
                
            }
            else {
                printf("It is not a prime number");
                break;

            }
        }
        a++;
    }
    return 0;
}