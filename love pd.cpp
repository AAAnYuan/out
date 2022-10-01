#include<stdio.h>
#include <windows.h>
#include<tchar.h>
#include<iostream>
#include<string>
using namespace std;
string str1, str2;
int main() {
    srand((unsigned)time(NULL));
    double x, y, a;
    printf("感情判断器\n");
    printf("请输入两个名字\n");
    cin >> str1 >> str2;
    cout << "                      " << str1 << " and " << str2 << "\n";
    int pd = rand() % 10;
    if (pd == 1 or pd == 5 or pd == 4 or pd == 9 or pd == 3)
        system("color F2");
    else
        system("color F4");
    for (y = 1.5; y > -1.5; y -= 0.1214)
    {
        for (x = -1.5; x < 1.5; x += 0.05)
        {
            a = x * x + y * y - 1;
            if (a * a * a - x * x * y * y * y <= 0)
            {
                printf("*");
                Sleep(1);
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
