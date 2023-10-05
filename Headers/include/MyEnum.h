//
// Created by 顺东 on 2023/10/3.
//

#include "../../Sources/src/MyEnum.cpp"

string MyEnum::toName( eDirection dir)
{
    return nameDir[dir];
}

string MyEnum::toSymbol( eDirection dir)
{
    return symbolDir[dir];
}

MyEnum::eDirection MyEnum::giveDirection(){
    int valor, min = 1;
    cout << "Escull una direccio:" << endl;
    for( int i = min; i <= length; i++)
        cout << "\t" << i << " " << nameDir[i-1] << endl;

    do{
        cout << "Especifica un valor dins de l'interval [" << min << ", " << length << "]" << endl;
        cin >> valor;
    } while (valor < min || valor > length);

    return eDirection(valor-1);
}

int* MyEnum::movement(MyEnum::eDirection dir) {
    static int pos[2];
    pos[0] = moveDir[0][dir];
    pos[1] = moveDir[1][dir];
    return pos;
}
//这些函数可以在游戏或其他应用程序中使用，用于将方向枚举转换为名称、符号表示，
// 以及获取用户选择的方向。它们提供了方便的工具，使得处理方向和用户输入变得更加容易。




