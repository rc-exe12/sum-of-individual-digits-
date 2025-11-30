#include<stdio.h>
int sum_n(int);
int main(){
    int n,x;
    printf("enter a number:");
    scanf("%d",&n);
    x=sum_n(n);
    printf("sum of first %d natural numbers is %d\n",n,x);
}
int sum_n(int n){
    int r;

    if(n==0)
        return 0;
    else
        return r+sum_n(n/10);
        
}