// �E�E���k��
#include <iostream>
using namespace std;

// ���for�j�饴�L�E�E���k��
void NineToNine()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            cout << i << "*" << j << "=" << i * j << "  ";
        }
        cout << endl; // ����
    }
}

int main()
{
    NineToNine();

    system("pause");
    return 0;
}
