#include <SFML/Graphics.hpp>
#include <iostream>
#include <windows.h>

using namespace sf;
using namespace std;

void space(int i) {
    for (int ii = 0; ii < i; ii++) {
        std::cout << " ";
    }
}
void symbol(int i) {
    for (int ii = 0; ii < i; ii++) {
        std::cout << "*";
    }
}

void symA(int i) {
    for (int ii = 0; ii < i; ii++) {
        std::cout << "a";
    }
}

void symB(int i) {
    for (int ii = 0; ii < i; ii++) {
        std::cout << "b";
    }
}

void printSome(int i, char c)
{
    for (int ii = 0; ii < i; ii++) {
        std::cout << c;
    }
}
void line_break(int i) {
    for (int ii = 0; ii < i; ii++) {
        std::cout << std::endl;
    }
}

int main1()
{
    for (int i = 1; i < 3; i++)
    {
        // one line
        symbol(1 * i);
        Sleep(300);
        space(7 * i);
        Sleep(300);
        symbol(1 * i);
        Sleep(300);
        space(5 * i);
        Sleep(300);
        symbol(2 * i);
        Sleep(300);
        space(3 * i);
        Sleep(300);
        symbol(1 * i);
        Sleep(300);
        space(3 * i);
        Sleep(300);
        symbol(2 * i);
        Sleep(300);
        space(1 * i);

        printSome(2,'\n');
        Sleep(900);
    }
    system("pause");
    return 0;
}
