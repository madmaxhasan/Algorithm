#include<stdio.h>
#include<string.h>

void BinarySearch(char arr[], char n)
{
    int first = 0;
    int last = strlen(arr) - 1;
    int mid = (first + last) / 2;
    while(first <= last)
    {
        if(arr[mid] < n)
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
    printf("Enter a String: ");
    char s[100];
    scanf("%s",&s);
    printf("\nEnter the Character you want to Find: ");
    getchar();
    char element;
    scanf("%c",&element);
    BinarySearch(s, element);

    printf("\nDo you want to Continue (Select Y or N): ");
    getchar();
    char ch;
    scanf("%c",&ch);
    if(ch == 'Y')
    {
        printf("\nEnter the Character you want to Find: ");
        getchar();
        char element;
        scanf("%c",&element);
        BinarySearch(s, element);
    }
    else
    {
        printf("\nThanks For using Binary Search\n");
    }
    return 0;
}
