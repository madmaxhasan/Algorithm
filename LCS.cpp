#include<bits/stdc++.h>

using namespace std;

int i, j, m, n, c[20][20], k = 0;
char x[20], y[20], b[20][20];
char ans[20];

char maxC(char a, char b)
{
    return ((a > b) ? a : b);
}

void print(int i,int j)
{
    if(i==0 || j==0)return;
    if(b[i][j]=='c')
    {
        print(i-1,j-1);
        printf("%c",x[i-1]);
        ans[k++] = x[i-1];
    }
    else if(b[i][j]=='u')print(i-1,j);
    else print(i,j-1);
}

void lcs()
{
    m=strlen(x);
    n=strlen(y);
    for(i=0; i<=m; i++)c[i][0]=0;
    for(i=0; i<=n; i++)c[0][i]=0;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i-1]==y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]='c';
            }
            else
            {
                c[i][j] = maxC(c[i-1][j], c[i][j-1]);
                c[i-1][j] >= c[i][j-1] ? b[i][j]='u' : b[i][j]='l';
            }
        }
    }
}

int main()
{
    printf("Enter 1st sequence: ");
    scanf("%s",x);
    printf("Enter 2nd sequence: ");
    scanf("%s",y);
    printf("\nThe Longest Common Subsequence is: ");
    lcs();
    print(m,n);
    printf("\n");
    ans[k] = '\0';
    int len = strlen(y);
    printf("Matching Percentage: %.2lf%%\n",((k*1.00) / (len * 1.00)) * 100.00);
    return 0;
}
