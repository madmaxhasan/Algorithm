#include<stdio.h>

void Find_Medium_Value(int arr[], int sz)
{
    if(sz & 1)
    {
        printf("Medium Value: %d\n",arr[(sz/2) + 1]);
    }
    else
    {
        int pos1 = sz/2;
        int pos2 = sz/2 + 1;
        int value = (arr[pos1] + arr[pos2]) / 2;
        printf("Medium Value: %d\n",value);
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N+1];
    for(int i=1; i<=N; i++)
    {
        scanf("%d",&arr[i]);
    }
    Find_Medium_Value(arr,N);
    return 0;
}
