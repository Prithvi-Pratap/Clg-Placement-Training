#include <stdio.h>
int main()

{

    int dd, mm, yyyy;
    int NoOfDays=0;
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    
    switch(mm){

        case 1:NoOfDays+=31;
        case 2:NoOfDays+=28;
        case 3:NoOfDays+=31;
        case 4:NoOfDays+=30;
        case 5:NoOfDays+=31;
        case 6:NoOfDays+=30;
        case 7:NoOfDays+=31;
        case 8:NoOfDays+=31;
        case 9:NoOfDays+=30;
        case 10:NoOfDays+=31;
        case 11:NoOfDays+=30;
        case 12:NoOfDays+=31;

    }
    if((mm==1 || mm==2)&&(yyyy%4==0 && yyyy%100!=0 || yyyy%400==0)){
        NoOfDays+=1;
    }
    printf("%d",NoOfDays-dd);

    return 0;
}