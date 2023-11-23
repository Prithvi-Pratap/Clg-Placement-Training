/*

// display the sum of the digits i/p: 123, o/p:6

#include<stdio.h>
int main(){
    int n,result=0;
    scanf("%d",&n);
    while(n>0){
        result+=n%10;
        n=n/10;
    }
    printf("%d",result);
    return 0;
}



// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//reverse the number

#include<stdio.h>
int main(){
    int n,digit,result=0;
    scanf("%d",&n);
    while(n>0){
        digit=n%10;
        result=result*10 + digit;
        n=n/10;
    }
    printf("%d",result);
    return 0;
}



//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


//check whether the number is palindrome or not

#include<stdio.h>
int main(){
    int n,digit,result=0,save;
    scanf("%d",&n);
    save=n;
    while(n>0){
        digit=n%10;
        result=result*10 + digit;
        n=n/10;
    }
    if(save==result)
    printf("palindrome");
    else
    printf("not");
    return 0;
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//magic number : 1729 => sum of digits:19 , reverse sum:91, product of reverse and sum == number i.e: 19*91==1729

#include <stdio.h>
int main()
{
    int n, sum = 0, saveS = 0, rev = 0, digit = 0, saveN = 0;
    scanf("%d", &n);
    saveN = n;
    while (n)
    {
        sum += n % 10;
        n = n / 10;
    }
    saveS = sum;
    while (sum)
    {
        digit = sum % 10;
        rev = rev * 10 + digit;
        sum = sum / 10;
    }
    if (saveN == (saveS * rev))
    {
        printf("MAGIC NUMBER");
    }
    else
    {
        printf("NOT");
    }

    return 0;
}



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


*/
#include<stdio.h>

int reverse(int rev){
    int digit = 0,result = 0;
        while(rev){
        digit=rev%10;
        result=result*10 + digit;
        rev=rev/10;
    }
    return result;
}

int square(int sq){
    sq=sq*sq;
    return sq;
}
int main(){
    int num,sqNum=0,revSq=0;
    scanf("%d", &num);
    sqNum=square(num);
    revSq=reverse(num);
    revSq=square(revSq);
    revSq=reverse(revSq);
    if(revSq==sqNum){
        printf("ADAM's no.");
    }
    else
    printf("not");
    return 0;
}