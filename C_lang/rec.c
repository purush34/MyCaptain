#include<stdio.h>
int add(int n){
    if (n==0)   
    {
        return 0;
    }
    else{
        return n+add(n-1);
    }
    
}
int main(){
    printf("Enter number \n");
    int g;
    scanf("%d",&g);
    int res  = add(g);
    printf("sum of natural numbers is %d",res);
}