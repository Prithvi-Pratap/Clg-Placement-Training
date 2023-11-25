/*
// ***************
//  *************
//   ***********
//    *********
//     *******
//      *****
//       ***
//        *


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     for(int row=n;row>=0;row--){
        for(int col=1;col<=n-row;col++){
            printf(" ");
        }
        for(int col=1;col<=2*row-1;col++){
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// * * * * *
// *       *
// *       *
// *       *
// * * * * *



#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (row == 1 || row == n)
            {
                printf("* ");
            }
            else if ((row != 1) && ((col == 1) || (col == n)))
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


// *     *
//  *   *
//   * *
//    *
//   * *
//  *   *
// *     *



#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col==row || (col==(n+1)-row))
            {
                printf("*");
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++




#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n; col++)
        {
            if (col==row || (col==(n+1)-row) ||(row == 1 || row == n) || (col == 1) || (col == n))
            {
                printf("* ");
            }

            else{
                printf(" ");
            }
        }
        printf("\n");
    }


    return 0;
}


//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//       *******
//      *******
//     *******
//    *******
//   *******
//  *******
// *******
// *******
//  *******
//   *******
//    *******
//     *******
//      *******
//       *******


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int square = 1; square <= n; square++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = n; row >=0; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int square = 1; square <= n; square++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++



// ******
//  ******
//   ******
//    ******
//     ******
//      ******
//       ******
//      ******
//     ******
//    ******
//   ******
//  ******
// ******


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int row = n; row >= 0; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int square = 1; square <= n; square++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int square = 1; square <= n; square++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

// ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++


#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=1;col<=n-row;col++){
            printf("*");
        }
        for(int col=1;col<=row;col++){
            printf(" ");
        }
        for(int col=1;col<=n-row;col++){
            printf(" ");
        }
        // for(int col=1;col<=row;col++){
        //     printf("*");
        // }
        printf("\n");
    }

    return 0;
}



//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 5 5 1 5 5
// 5 5 2 5 5
// 5 5 3 5 5
// 5 5 4 5 5
// 5 5 5 5 5

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int col=1;col<=n;col++){

            if(col==n/2 + 1){
                printf("%d ",row);
            }
            else{
                printf("%d ",n);
            }
        }
        printf("\n");
    }
    return 0;
}


//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++

// 01
// 02*03
// 04*05*06
// 07*08*09*10
// 11*12*13*14*15
// 16*17*18*19*20*21


#include <stdio.h>
int main()
{
    int n, val = 1;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%02d ", val++);
            if (row != 1 && col != row)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}



//+++++++++++++++++++++++or++++++++++++++++++++++



#include <stdio.h>
int main()
{
    int n, val = 1;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col < row; col++)
        {
            printf("%02d*", val++);
        }
        printf("%02d",val++);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col < row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= n; col++)
        {
            if (row == col || (col + row) == n + 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/