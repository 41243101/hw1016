#include <iostream>
#include <vector>
#include <algorithm>  // ノ sort()
using namespace std;
int main()
{
    vector<int> numbers;  // ノㄓ块┮Τ计
    int x;
    // 弄–块 EOF (块挡)
    while (cin >> x)
    {
        numbers.push_back(x);  // р穝计计
        sort(numbers.begin(), numbers.end());  // 逼计
        int n = numbers.size();         // 讽玡计
        int median;

        if (n % 2 == 1)
        {
            median = numbers[n / 2];    // 计い丁计
        }
        else
        {
            median = (numbers[n / 2] + numbers[n / 2 - 1]) / 2; // 案计い丁ㄢ计キА俱
        }

        cout << median << endl;  // 块い计
    }
    return 0;
}