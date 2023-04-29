//
// Created by Administrator on 2023/4/29.
//

#ifndef INC_429SANZIQI_GAME_H
#define INC_429SANZIQI_GAME_H

#endif //INC_429SANZIQI_GAME_H

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

//初始化棋盘
void InitBoard(char board[ROW][COL],int row,int col);

//打印棋盘
void DisplayBoard(char board[ROW][COL],int row,int col);

//玩家下棋
void PlayerMove(char board[ROW][COL],int row,int col);

//电脑下棋
//找没有下棋的位置随机下棋
void ComputerMove(char board[ROW][COL],int row,int col);

//玩家赢。返回*
//电脑赢。返回#
//平局。返回Q
//继续。返回C
char IsWin(char board[ROW][COL],int row,int col);