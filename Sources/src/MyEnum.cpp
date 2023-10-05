//
// Created by 顺东 on 2023/10/5.
//

#include "../../Headers/include/MyEnum.h"

//
// Created by 顺东 on 2023/10/3.
//
#include <iostream>
#include <string>
using namespace std;

#ifndef INC_3_1_高级编程_MYENUM_H
#define INC_3_1_高级编程_MYENUM_H


class MyEnum {
    enum eDirection { Up, Down, Left, Rigth};
    const string nameDir[] = { "Up", "Down", "Left", "Rigth" };
    const string symbolDir[] = { " ^", " v", " <", " >" };
    const int length = 4;
    const int moveDir[2][length] = {-1, 1, 0, 0, //row
                                    0, 0, -1, 1}; //col

    string toName( eDirection dir);

    string toSymbol( eDirection dir);

    eDirection giveDirection();

    int* movement(eDirection dir);
};


#endif //INC_3_1_高级编程_MYENUM_H

//这个头文件定义了一些用于处理方向和移动的常量、枚举和函数，
//可以在游戏或其他应用程序中使用，以方便地表示和操作方向。在实际的程序中，
// 你可以包含这个头文件并使用其中定义的内容
