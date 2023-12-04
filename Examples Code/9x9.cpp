// 九九乘法表
#include <iostream>
using namespace std;

// 兩個for迴圈打印九九乘法表
void NineToNine()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i << "*" << j << "=" << i * j << "  ";
        }
        cout << endl; // 換行
    }
}

int main()
{
    NineToNine();

    system("pause");
    return 0;
}
