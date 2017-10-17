#include<bits/stdc++.h>

using namespace std;

int c[100][100],i,j,m,n;
char b[100][100],x[100],y[100];

void Print(int i, int j)
{
    if(i == 0 || j == 0)return;
    if(b[i][j] == 'c')
    {
        Print(i-1, j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j] == 'u')
    {
        Print(i-1, j);
    }
    else
    {
        Print(i, j-1);
    }
}

void lcs()
{
    m = strlen(x);
    n = strlen(y);
    for(i=0; i<=m; i++)c[i][0] = 0;
    for(i=0; i<=n; i++)c[0][i] = 0;
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(x[i-1] == y[j-1])
            {
                c[i][j] = c[i-1][j-1];
                b[i][j] = 'c';
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j] = c[i-1][j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }
}

int main()
{
    memset(c, 0, sizeof(c));
    memset(b, '\0', sizeof(b));
    memset(x, '\0', sizeof(x));
    memset(y, '\0', sizeof(y));
    scanf("%s %s",x,y);
    lcs();
    Print(m,n);
    puts("");
    return 0;
}
