#include<stdio.h>
int main(){
    printf("Enter your grade \n");
    int g;
    scanf("%d",&g);
    if (g==1)
    {
        printf("Pizza,Rs 239");
    }
    else if(g==2)
    {
        printf("Burger, Rs 129");
    }
    else if (g==3)
    {
        printf("Pasta, Rs 179");
    }
    else if (g==4)
    {
        printf("French Fries, Rs 99");
    }
    else if (g==5)
    {
        printf("Sandwich, Rs 149");
    }
    return 0;
    
}