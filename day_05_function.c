/*

//strong number: i/p 145 , o/p: strong number
145=> 5! + 4! + 3! + 2! + 1 = 145


#include <stdio.h>

int factorial(int n)
{
    int fact = 1;

    while (n)
    {

        if (n == 0 || n == 1)
        {
            return fact;
        }
        else
        {
            fact = fact * n;
            n--;
        }
    }
    return fact;
}

int main()
{

    int num, digit, save = 0, sum = 0;
    scanf("%d", &num);
    save = num;
    while (num)
    {
        digit = num % 10;
        sum = sum + factorial(digit);
        num = num / 10;
    }

    if (save == sum)
    {
        printf("strong number");
    }
    else
    {
        printf("not");
    }

    return 0;
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


*/

// prime checking

#include <stdio.h>

int prime(int n)
{
    int fact;
    int count = 1;
    for (fact = 1; fact <= n / 2; fact++)
    {
        if (n % fact == 0)
        {
            count++;
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{

    int num,digit;
    scanf("%d", &num);
    while (num)
    {
        digit = num % 10;
        if(prime(digit)){
            printf("%d",digit);
        }
        num=num/10;
    }

    return 0;
}