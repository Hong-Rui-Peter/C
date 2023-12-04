// 氣泡排序法
#include <iostream>
using namespace std;

// 排列小到大
void sort(int n[], int len)
{
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len; j++)
        {
            if (n[j] > n[j + 1]) // 如果後者大於前者
            {
                int temp = n[j + 1]; // 前後教換
                n[j + 1] = n[j];
                n[j] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        cout << n[i];
    }
    cout << endl;
}

int main()
{
    int n[] = {3, 2, 5, 4, 1};
    int len = sizeof(n) / sizeof(n[0]);

    sort(n, len);

    system("pause");
    return 0;
}