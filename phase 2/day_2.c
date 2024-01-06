// #include<stdio.h>
// int factorial(int n){
//     int fact=1;
//     if(n==1) return fact;
//     else{
//         fact*= factorial(n-1);
//     }
//     return fact;
// }
// int main(){
//     int n,result=0;
//     scanf("%d",&n);
//     result=factorial(n);
//     printf("%d\n",result);
//     return 0;
// }

#include <stdio.h>

int countDigits(int n){
    int count=0;
    while(n){
        n=n/10;
        count++;
    }
    return count;
}

int main()
{
    int n;
    scanf("%d", &n);
    while(countDigits(n)>3){
        n=n/10;
    }
    printf("%d\n", n);
    return 0;
}