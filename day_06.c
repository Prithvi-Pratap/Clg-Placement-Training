/*
//no. of occurrences of a given number;

#include<stdio.h>
int main(){
    int num,a,digit,freq=0;
    scanf("%d%d",&num,&a);
    while(num){
        digit=num%10;
        if(digit==a)
        freq++;
        num=num/10;
    }
    printf("%d",freq);
    return 0;
}

//power of 2:

// #include <stdio.h>

// int powerOf2(long a){
//     int remainder;
//     while(a>1){
//         a=a/2;
//         remainder=a%2;

//     }
//     return remainder;
// }

// int main(){
// int num;
// scanf("%d",&num);
// if(powerOf2(num))
// printf("yes");
// else
// printf("not");
// return 0;

// }


// write a c program to find the maximum element in a array
//i/p:no. of rows,no. of columns
// 3,3
//1 4 9 r1 =>0
//3 5 1 r2 ==>5 
// 2 8 5 r3 =>8


#include<stdio.h>
int main(){

    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int save[row];
    for(int i=0;i<row;i++){
        save[i]=0;
        for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
        if(save[i]<arr[i][j])
        save[i]=arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        printf("%d\n",save[i]);
    }


return 0;
}


// write a c program to find the sum of elements in each row and coloumn and also find the greatest sum of 

// i/p; 3 3
// 1 6 8 
// 2 5 1
// 3 8 2
// o/p: sum of rows 15 8 and 13
//      row one has maximum sum
//      sum of columns 6 19 and 11
//      col 2 has max sum

*/

#include<stdio.h>
int main(){

    int row,col;
        int maxR=0;
        int maxC=0;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int sumR[row];
    int sumC[row],indexR,indexC;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        sumC[i]=0;
        sumR[i]=0;
        for(int j=0;j<col;j++){
        sumR[i]+=arr[i][j];
        sumC[i]+=arr[j][i];
        }
    }
    printf("sum of rows %d %d and %d\n",sumR[0],sumR[1],sumR[2]);

    for(int i=0;i<row;i++){
        if(maxR<sumR[i]){
        maxR=sumR[i];
        indexR=i;
        }
    }
    printf("row %d has maximum sum %d\n",indexR+1,maxR);
    
    printf("sum of column %d %d and %d\n",sumC[0],sumC[1],sumC[2]);

    for(int i=0;i<col;i++){
        if(maxC<sumC[i]){
        maxC=sumC[i];
        indexC=i;
        }
    }
    printf("col %d has maximum sum %d\n",indexC+1,maxC);
    
    

return 0;
}




















