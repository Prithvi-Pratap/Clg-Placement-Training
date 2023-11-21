// how to #define the value

// #include<stdio.h>

// #define a 5+2

// int main(){

//     printf("%d",a*a);

//     return 0;
// }




//max of 3 problem

// #include <stdio.h>

// int main()
// {
//   //code here
//     return 0;
// }



//program for valid date 

/*
conditions: for the months- 1,3,5,7,8,10,12=> 31 days

*/

#include <stdio.h>
int main()
{
    int dd, mm, yy;
    scanf("%d/%d/%d", &dd,&mm,&yy);

    if ((mm ==1 || mm ==3 || mm ==5 || mm ==7 || mm ==8 || mm ==10 || mm ==12) && (dd >= 1 && dd <= 31))
    {
        printf("valid date");
    }
    else if ((mm == 4 || mm ==6 || mm ==9 || mm ==11) && (dd >= 1 && dd <= 30))
    {
        printf("valid date");
    }
    else if (mm == 2)
    {
        if (((yy % 4 == 0) && (yy % 100 != 0) || (yy % 400 == 0))&& (dd>=1 && dd<=29))
        {
            printf("valid date");
        }
        else if((dd>=1 && dd<=28))
        {
            printf("valid date");
        }
        else{
            printf("invalid date");
        }
    }

    return 0;
}

