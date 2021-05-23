#include<stdio.h>
int main(){
    printf("Enter your grade \n");
    int g;
    scanf("%d",&g);
    if (85<g)
    {
        printf("Grade A");
    }
    else if (70<g)
    {
        printf("Grade B");
    }
    else if (55<g)
    {
        printf("Grade C");
    }
    else if (40<g)
    {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }
    
}