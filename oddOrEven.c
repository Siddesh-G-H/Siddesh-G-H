#include<stdio.h>
int main(){
    int n;
    printf("Enter the number >> ");
    scanf("%d",&n);
    
    printf(n%2==0? "The number is even":"The number is odd");

    }