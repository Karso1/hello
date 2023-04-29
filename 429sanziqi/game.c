//
// Created by Administrator on 2023/4/29.
//

#include "game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    int j = 0;
    for(i = 0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j] = ' ';
        }
    }
}//��ʼ������
/*v1
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    for(i = 0;i<row; i ++)
    {
        //��ӡ����
        printf(" %c | %c | %c \n",board[i][0],board[i][1],board[i][2]);
        //��ӡ�ָ���Ϣ
        printf("---|---|---\n");
    }
}
*/
//v2
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i = 0;
    for(i =0;i<row;i++)
    {
        //��ӡ����
        int j  = 0;
        for (j = 0;j<col;j++)
        {
            printf(" %c ", board[i][j]);
            if(j<col-1)
            {
                printf("|");
            }
        }
        printf("\n");
        //��ӡ�ָ���Ϣ
        if(i<row-1)
        {
            int j =0;
            for (j = 0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                {
                    printf("|");
                }
            }
            printf("\n");
        }
    }
}

void PlayerMove (char board[ROW][COL],int row,int col)
{
    int x = 0;
    int y = 0;
    printf("������壺");
    while(1)
    {
        printf("���������꣺");
        scanf("%d %d",&x,&y);

        //����ͷ�Χ�Ϸ�
        if(x >= 1 && x<= row && y>=1 && y<= col)
        {
            if(board[x-1][y-1] == ' ')
            {
                board[x-1][y-1] = '*';
                break;
            }
            else
            {
                printf("���걻ռ�ã��������壬��ѡ������λ��");
            }
        }
        else
        {
            printf("����Ƿ������������룺");
        }
    }
}

void ComputerMove(char board[ROW][COL],int row,int col)
{
    printf("�������壺\n");
    int x = 0;
    int y = 0;

    while(1)
    {
        x = rand() % row;//0-2
        y = rand() % col;//0-2
        if (board[x][y] == ' ')
        {
            board[x][y] = '#';
            break;
        }
    }
}

int IsFull(char board[ROW][COL],int row,int col)
{
    //�������˷���1����������0
    int i = 0;
    int j = 0;
    for(i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        {
            if(board[i][j] == ' ')
            {
                return 0;
            }
        }
    }
    return 1;
}

char IsWin(char board[ROW][COL],int row,int col)
{
    //���ж���
    int i = 0;
    for(i = 0;i<row;i++)
    {

        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
        {
              return board[i][1];
        }
    }
    //���ж���
    int j = 0;
    for(j = 0;j<col;j++)
    {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
        {
            return board[1][j];
        }
    }

    //�ж϶Խ���
    if(board[0][0] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
    {
        return board[1][1];
    }

    //û����Ӯ����Ҫƽ��
    if(IsFull(board,row,col))
    {
        return 'Q';
    }

    //��Ϸ����
    return 'C';
}