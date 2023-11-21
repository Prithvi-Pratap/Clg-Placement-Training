// #1. printing the factor and sum of the factors

/*

#include<stdio.h>
int main(){

    int N,fact;
    int count=0;
    int sum=0;
    scanf("%d",&N);
    for(fact=1;fact<=N;fact++){
        if(N%fact==0){
            printf("%d ",fact);
            count++;
            sum+=fact;
        }

    }
    printf("\n%d\n%d",count,sum);



    return 0;
}


//prime number


#include<stdio.h>
int main(){
    int N,fact;
    int count=1;

    scanf("%d",&N);
    for(fact=1;fact<=N/2;fact++){
        if(N%fact==0){
            count++;
        }

    }
    if(count==2){
        printf("it is prime");
    }
    else{
        printf("it is not prime");
    }


    return 0;
}


// perfect number :

#include <stdio.h>
int main()
{
    int N, fact;
    int sum = 0;

    scanf("%d", &N);
    for (fact = 1; fact <= N / 2; fact++)
    {
        if (N % fact == 0)
        {
            sum += fact;
        }
    }
    if (sum == N)
    {
        printf("perfect number");
    }
    else
    {
        printf("not perfect number");
    }
    return 0;
}


// primefactor

#include <stdio.h>

int isPrime(int factors)
{
    int count = 1;
    int flag = 0;
    for (int i = 1; i <= factors / 2; i++)
    {
        if (factors % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
        return flag += 1;

    else
        return flag;
}



int main()
{

    int N, fact;
    scanf("%d", &N);
    for (fact = 1; fact <= N; fact++)
    {
        if (N % fact == 0)
        {
            if (isPrime(fact))
                printf("%d ", fact);
        }
    }

    return 0;
}


// multiplication without using * operator

#include <stdio.h>
int main()
{

    int num1, num2;
    int result = 0;
    scanf("%d%d", &num1, &num2);

    for (int i = 0; i < num2; i++)
    {
        result+= num1;
    }
    printf("%d ", result);

    return 0;
}


//display quotient, remainder

#include<stdio.h>

int main(){

    int dividend, divisor;
    int quotient=0;
    scanf("%d%d", &dividend, &divisor);

    while(divisor<=dividend){
        dividend=dividend-divisor;
        quotient++;
    }
    printf("%d %d", quotient, dividend);

    return 0;
}




// fibbonacci series: next number will be the sum of previous two numbers , lets say starting two numbers are 1 and 2 ,next number will be 3 , 5,8 ...

#include <stdio.h>
int main()
{

    int n, num3;
    int num1 = 1, num2 = 2;
    scanf("%d", &n);
    if ((n == 1) || (n == 2))
    {
        printf("%d", n);
    }
    else
    {
        printf("1 2 ");
        for (int i = 2; i < n; i++)
        {
            num3 = num1 + num2;
            num1 = num2;
            num2 = num3;
            printf("%d ", num3);
        }
    }

    return 0;
}

*/

























