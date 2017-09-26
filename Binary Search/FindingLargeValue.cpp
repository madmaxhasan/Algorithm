#include<stdio.h>

int Find_Large(int arr[], int sz)
{
    int large = arr[0];
    for(int i=0; i<sz; i++)
    {
        if(arr[i] > large)large = arr[i];
    }
    return large;
}

int Find_Second_Large(int arr[], int sz, int large)
{
    int large2nd = arr[0];
    for(int i=0; i<sz; i++)
    {
        if(arr[i] > large2nd && arr[i] < large)large2nd = arr[i];
    }
    return large2nd;
}

int main()
{
    int N;
    scanf("%d",&N);
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    int large = Find_Large(arr, N);
    int large2nd = Find_Second_Large(arr, N, large);
    printf("Large Value: %d\n2nd Large: %d\n",large,large2nd);
    return 0;
}
