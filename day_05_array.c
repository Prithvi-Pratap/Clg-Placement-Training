/*

//link:https://onlinegdb.com/rX7RSvngIb



//array:replacing element with sum of its left elements

//incomplete

#include <stdio.h>

// int swap(int x,int y){
//     int
//     return x,y;
// }

int main()
{
    int arr[100], N, ans = 0;
    int x, y, temp;
    scanf("%d ", &N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", ans);
        ans = ans + arr[i];
        temp = arr[i];
        arr[i] = ans;
        arr[N-i-1] = temp;
    }
    printf("\n");
    for(int i = 0; i < N; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

//swapping array elements


#include <stdio.h>


int main()
{
    int arr[100], N, ans = 0;
    int temp;
    scanf("%d ", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < N; i+=2)  //we can change this condition instead of adding if condition , change: i<N-1
    {
        if(i+1<N){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        }
    }
    for(int i = 0; i < N; i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}




//array:element insertion

#include<stdio.h>
int main(){
    int N,arr[100],element,pos,ind;
    scanf("%d",&N);
    for(ind=0;ind<N;ind++){
        scanf("%d",&arr[ind]);
    }
    scanf("%d %d",&element,&pos);
    for(ind=N-1;ind>=pos;ind--){
        arr[ind+1]=arr[ind];
    }
    arr[pos]=element;
    N++;
    for(ind=0;ind<N;ind++){
        printf("%d ",arr[ind]);
    }
    return 0;
}

//array: element deletion

#include<stdio.h>
int main(){
    int N,arr[100],pos;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&pos);
    for(int i=pos;i<N;i++){
        arr[i]=arr[i+1];
    }
    N--;
    for(int i=0;i<N;i++){
        printf("%d",arr[i]);
    }
    return 0;
}

*/

//array:rotation of array n times (clockwise)

#include <stdio.h>
int main()
{
    int N, arr[100], rotate, save = 0;
    scanf("%d", &N);


        for (int i = 0; i < N; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &rotate);
    while (rotate--)
    {
        save = arr[0];
        for (int i = 1; i < N; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[N - 1] = save;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
