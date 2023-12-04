// 基本打印、輸出入
#include <iostream>
using namespace std;

// printf&count應用
void print_fuck_C()
{
    printf("Fuck C/C++\n");
    cout << "Fuck C/C++" << endl;
}

// 輸入cin
void input_output()
{
    string name;
    cout << "請輸入名字:";
    cin >> name;
    cout << name << "好帥" << endl;
}

int main()
{
    print_fuck_C();
    input_output();

    system("pause");
    return 0;
}