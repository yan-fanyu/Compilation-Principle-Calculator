#ifndef CONST_H
#define CONST_H
#include<iostream>
#include<string>
#include <QString>
#include <vector>
using namespace std;
#include <map>
#include<iomanip>	//I/O控制流头文件
#include <stack>

//*********************语法分析器******************************//
//Action表
static int action[16][8] = { { 0, 0, 0, 0, 4, 0, 5, 0 },//0
{ 6, 7, 0, 0, 0, 0, 0, 100 },//1
{ -3, -3, 8, 9, 0, -3, 0, -3 },//2
{ -6, -6, -6, -6,  0, -6, 0, -6 },//3
{ 0, 0, 0, 0, 4, 0, 5, 0 },//4
{ -8, -8, -8, -8, 0, -8, 0, -8 },//5
{ 0, 0, 0, 0, 4, 0, 5, 0 },//6
{ 0, 0, 0, 0, 4, 0, 5, 0 },//7
{ 0, 0, 0, 0, 4, 0, 5, 0 },//8
{ 0, 0, 0, 0, 4, 0, 5, 0 },//9
{ 6, 7, 0, 0, 0, 15, 0, 0 },//10
{ -1, -1, 8, 9, 0, -1, 0, -1 },//11
{ -2, -2, 8, 9, 0, -2, 0, -2 },//12
{ -4, -4, -4, -4, 0, -4, 0, -4 },//13
{ -5, -5, -5, -5, 0, -5, 0, -5 },//14
{ -7, -7, -7, -7, 0, -7, 0, -7 }//15
};//17
//Goto表
static int gotol[16][3] = { { 1, 2, 3 },//0
{ 0, 0, 0 },    //1
{ 0, 0, 0 },    //2
{ 0, 0, 0 },    //3
{ 10, 2, 3 },   //4
{ 0, 0, 0 },    //5
{ 0, 11, 3 },   //6
{ 0, 12, 3 },   //7
{ 0, 0, 13 },   //8
{ 0, 0,14 },    //9
{ 0, 0, 0 },    //10
{ 0, 0, 0 },    //11
{ 0, 0, 0 },    //12
{ 0, 0, 0 },    //13
{ 0, 0, 0 },    //14
{ 0, 0, 0 } };  //17
//终结符集合
static string endls[9] = { "+", "-", "*", "/", "(", ")", "=","id","#" };
//非终结符集合
static string noends[3] = { "E", "T", "F" };
//产生式集合
static string products[9] = { "E", "E+T", "E-T", "T", "T*F", "T/F", "F", "(E)", "id" };

/*  文法如下

    E=> T+F | T-F |T
    T=> F*T | F/T |F
    F=> (E) | id
*/


//*********************词法分析器******************************//
static char SEPARATER[2] = { '(', ')' };    //分隔符
static char OPERATOR[5] = { '+', '-', '*', '/', '=' };     //运算符
static char FILTER[4] = { ' ', '\t', '\r', '\n' };                    //过滤符



#endif // CONST_H
