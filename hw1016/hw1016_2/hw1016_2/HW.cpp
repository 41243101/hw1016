#include <iostream>
#include <vector>
#include <algorithm>  // �Ω� sort()
using namespace std;
int main()
{
    vector<int> numbers;  // �ΨӦs��J���Ҧ��Ʀr
    int x;
    // Ū���C�ӿ�J�A���� EOF (��J����)
    while (cin >> x)
    {
        numbers.push_back(x);  // ��s�Ʀr�[�J�ƦC
        sort(numbers.begin(), numbers.end());  // �ƧǼƦC
        int n = numbers.size();         // ��e�ƦC����
        int median;

        if (n % 2 == 1)
        {
            median = numbers[n / 2];    // �_�ƪ��סA����������
        }
        else
        {
            median = (numbers[n / 2] + numbers[n / 2 - 1]) / 2; // ���ƪ��סA��������ƪ������ȡ]�V�U����^
        }

        cout << median << endl;  // ��X�����
    }
    return 0;
}