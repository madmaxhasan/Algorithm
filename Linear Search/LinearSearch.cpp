#include<stdio.h>

/*Linear Search using Pseudo Code*/

void linear_Search_PseudoCode(int arr[], int sz, int n)
{
    for(int i=0; i<sz; i++)
    {
        if(arr[i] == n)
        {
            printf("Found\n");
            break;
        }
        if(i == sz-1)printf("Not Found\n");
    }
}

/*Linear Search Counting Element*/

void linear_Search_CountingElement(int arr[], int sz, int n)
{
    int counter = 0;
    for(int i=0; i<sz; i++)
    {
        if(arr[i] == n) /*If matched than Count*/
        {
            counter++;
        }
    }
    if(counter == 0)printf("No Element Found\n");
    else printf("Element %d Found %d times\n",n,counter);
}

/*Linear Search Element Index Founder*/

void linear_Search_IndexFounder(int arr[], int sz, int n)
{
    int matched = 0;
    for(int i=0; i<sz; i++)
    {
        if(arr[i] == n) /*If matched than Print*/
        {
            printf("Element Found on Index %d\n",i+1);
            matched = 1; /*If Found than than 1*/
        }
    }
    if(matched == 0)printf("No Element Found\n"); /*If Element Not Found*/
}

/*Linear Search using While Loop*/

void linear_Search_Using_WhileLoop(int arr[], int sz, int n)
{
    while(--sz)
    {
        if(arr[sz] == n)
        {
            printf("Found\n");
            break;
        }
    }
    if(sz == 0)printf("Not Found\n");
}

int main()
{
    printf("Enter the Number of Elements: ");

    int N,i;
    scanf("%d",&N);

    printf("Enter The Value of Elements: ");

    int arr[N];
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the Element you want to Find: ");

    int element;
    scanf("%d",&element);

    /*Linear Search*/

    linear_Search_PseudoCode(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

    /*Counting Element*/

    linear_Search_CountingElement(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

    /*Finding Matching Index*/

    linear_Search_IndexFounder(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

    /*Changing The Loop into While*/

    linear_Search_Using_WhileLoop(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

    /*Calling Again The Linear Search*/

    printf("Do you want to Continue (Y / N): ");

    getchar(); /*getchar() used for clearing Junk File*/
    char c;
    scanf("%c",&c);

    if(c == 'Y')
    {
        printf("Enter the Element you want to Find: ");

        int element;
        scanf("%d",&element);

        linear_Search_PseudoCode(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

        /*Counting Element*/

        linear_Search_CountingElement(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

        /*Finding Matching Index*/

        linear_Search_IndexFounder(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/

        /*Changing The Loop into While*/

        linear_Search_Using_WhileLoop(arr,N,element); /*Sending Parameter Array, Array Size, Element want to Find*/
    }
    else printf("Thanks For Using Linear Search\n");

    return 0;
}
