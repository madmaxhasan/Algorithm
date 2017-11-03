#include<stdio.h>

void BinarySearch(int arr[], int sz, int n)
{
    int first = 0;
    int last = sz - 1;
    int mid = (first + last) / 2;
    while(first <= last)
    {
        if(arr[mid] > n)
        {
            first = mid + 1;
        }
        else if(arr[mid] == n)
        {
            printf("\nFound\n");
            break;
        }
        else
        {
            last = mid - 1;
        }
        mid = (first + last) / 2;
    }
    if(first > last)printf("\nNot Found\n");
}

int main()
{
    printf("Enter the Number of Elements: ");
    int N;
    scanf("%d",&N);
    printf("\nEnter The Value of Elements:\n\n");
    int arr[N];
    for(int i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the Element you want to Find: ");
    int element;
    scanf("%d",&element);
    BinarySearch(arr, N, element);

    printf("\nDo you want to Continue (Select Y or N): ");
    getchar();
    char ch;
    scanf("%c",&ch);
    if(ch == 'Y')
    {
        printf("\nEnter the Element you want to Find: ");
        int element;
        scanf("%d",&element);
        BinarySearch(arr, N, element);
    }
    else
    {
        printf("\nThanks For using Binary Search\n");
    }
    return 0;
}
