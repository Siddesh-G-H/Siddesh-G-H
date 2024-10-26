#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter the number a >> ");
    scanf("%d",&a);

    printf("Enter the number b >> ");
    scanf("%d",&b);

    printf("Enter the number c >> ");
    scanf("%d",&c);

    if(a>b && a>c){
        printf("%d is Largest Number",a);
    }else{
        if(b>a && b>c){
            printf("%d is Largest Number",b);
        }else{
            printf("%d is Largest Number",c);
        }
    }
}