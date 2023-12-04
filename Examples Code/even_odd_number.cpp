// 判斷奇偶數
#include <iostream>
using namespace std;

void EvenOddNumber(int num)
{
    if (num % 2 == 0) // 除2餘數為0
    {
        cout << to_string(num) + "為偶數" << endl;
    }
    else
    {
        cout << to_string(num) + "為奇數" << endl;
    }
}

int main()
{
    int num;
    cout << "請輸入一個數字:";
    cin >> num;
    EvenOddNumber(num);

    system("pause");
    return 0;
}