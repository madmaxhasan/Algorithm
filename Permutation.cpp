#include<bits/stdc++.h>

using namespace std;

int pos[5];
int taken[5];

void permute(int n, int idx)
{
    if(idx == n+1)
    {
        for(int i=1; i<5; i++)printf("%d",pos[i]);
        printf("\n");
        return;
    }
    for(int i=1; i<=n; i++)
    {
        if(taken[i] == false)
        {
            taken[i] = true;
            pos[idx] = i;
            permute(n, idx+1);
            taken[i] = false;
        }
    }
}

int main()
{
    memset(pos, 0, sizeof(pos));
    memset(taken, 0, sizeof(taken));
    permute(4,1);
    return 0;
}

