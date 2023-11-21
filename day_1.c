// leap year problem
//  #include<stdio.h>

// int main(){
//     int year;
//     scanf("%d",&year);
//     if((year%4==0) && (year%100!=0) || (year%400==0)){
//         printf("Leap year");
//     }
//     else{
//         printf("not a leap year");
//     }

//     return 0;
// }

// check the given time is valid or not

#include <stdio.h>

int main()
{
    int hh, mm, ss;
    scanf("%d%d%d", &hh, &mm, &ss);

    if ((hh<=0 && hh < 24) &&( mm<=0 && mm < 60) && (ss<= 0 && ss < 60))
    {
    printf("valid");
    }
    else{
        printf("invalid");
    }
return 0;
}
