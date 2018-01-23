#include<bits/stdc++.h>
#define N 4

using namespace std;

int counter = 0;

void PrintBoard(int board[N][N])
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            printf("%d ",board[i][j]);
        }
        printf("\n");
    }
}

bool isSafe(int board[N][N], int row, int column)
{
    /*Check Row in Left Side*/
    for(int i=0; i<column; i++)
    {
        if(board[row][i])return false;
    }
    /*Check Upper Diagonal on Left Side*/
    for(int i=row, j=column; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j])return false;
    }
    /*Check Lower Diagonal on Left Side*/
    for(int i=row, j=column; j>=0 && i<N; i++, j--)
    {
        if(board[i][j])return false;
    }
    return true;
}

bool BackTrack(int board[N][N], int idx)
{
    if(idx == N)
    {
        printf("Board %d:\n",++counter);
        PrintBoard(board);
        printf("\n");
        return true;
    }
    for(int i=0; i<N; i++)
    {
        if(isSafe(board, i, idx))
        {
            board[i][idx] = 1;
            BackTrack(board, idx+1);
            board[i][idx] = 0;
        }
    }
    return false;
}

int main()
{
    int board[N][N];
    memset(board, 0, sizeof(board));
    if(!BackTrack(board, 0))printf("Solution Does not Exist\n");
    return 0;
}
