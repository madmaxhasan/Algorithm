#include<stdio.h>
#include<string.h>

/*Linear Search using Pseudo Code*/

void linear_Search_PseudoCode(char s[], char c)
{
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i] == c)
        {
            printf("Found\n");
            break;
        }
        if(i == len-1)printf("Not Found\n");
    }
}

/*Linear Search Counting Character*/

void linear_Search_CountingCharacter(char s[], char c)
{
    int counter = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i] == c)
        {
            counter++;
        }
    }
    if(counter == 0)printf("No Character Found\n");
    else printf("Character %c Found %d times\n",c,counter);
}

/*Linear Search Character Index Founder*/

void linear_Search_IndexFounder(char s[], char c)
{
    int matched = 0;
    int len = strlen(s);
    for(int i=0; i<len; i++)
    {
        if(s[i] == c) /*If matched than Print*/
        {
            printf("Character Found on Index %d\n",i+1);
            matched = 1; /*If Found than than 1*/
        }
    }
    if(matched == 0)printf("No Character Found\n"); /*If Character Not Found*/
}

/*Linear Search using While Loop*/

void linear_Search_Using_WhileLoop(char s[], char c)
{
    int len = strlen(s);
    while(--len)
    {
        if(s[len] == c)
        {
            printf("Found\n");
            break;
        }
    }
    if(len == 0)printf("Not Found\n");
}

int main()
{
    printf("Enter a String:\n");

    char str[100];
    scanf("%s",&str);

    printf("Enter the Character you want to Find:\n");

    getchar(); /*getchar() used for clearing Junk File*/
    char character;
    scanf("%c",&character);

    /*Linear Search*/

    linear_Search_PseudoCode(str,character); /*Sending Parameter String, Character want to Find*/

    /*Counting Character*/

    linear_Search_CountingCharacter(str,character); /*Sending Parameter String, Character want to Find*/

    /*Finding Matching Index*/

    linear_Search_IndexFounder(str,character); /*Sending Parameter String, Character want to Find*/

    /*Changing The Loop into While*/

    linear_Search_Using_WhileLoop(str,character); /*Sending Parameter String, Character want to Find*/

    printf("Do you want to Continue (Y / N): ");

    getchar(); /*getchar() used for clearing Junk File*/
    char ch;
    scanf("%c",&ch);

    if(ch == 'Y')
    {
        printf("Enter the Character you want to Find: ");

        getchar(); /*getchar() used for clearing Junk File*/
        char character;
        scanf("%c",&character);

        linear_Search_PseudoCode(str,character); /*Sending Parameter String, Character want to Find*/

        /*Counting Character*/

        linear_Search_CountingCharacter(str,character); /*Sending Parameter String, Character want to Find*/

        /*Finding Matching Index*/

        linear_Search_IndexFounder(str,character); /*Sending Parameter String, Character want to Find*/

        /*Changing The Loop into While*/

        linear_Search_Using_WhileLoop(str,character); /*Sending Parameter String, Character want to Find*/
    }
    else printf("Thanks For Using Linear Search\n");
    return 0;
}
