#include <iostream>
#include <string>
#include <algorithm>  // 引入 swap() 函式
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();  // 忽略換行符號
    int freq[26] = { 0 };  // 用陣列紀錄 A-Z 的頻率

    // 讀取輸入的每一行
    while (n--)
    {
        string line;
        getline(cin, line);

        // 逐字元處理每一行的輸入
        for (char c : line)
        {
            if (c >= 'a' && c <= 'z')
            {
                freq[c - 'a']++;  // 小寫字母
            }
            else if (c >= 'A' && c <= 'Z')
            {
                freq[c - 'A']++;  // 大寫字母
            }
        }
    }

    // 用兩個陣列來存字母與對應頻率
    int letters[26];
    for (int i = 0; i < 26; ++i)
    {
        letters[i] = i;  // 初始化字母索引
    }

    // 排序頻率與字母索引
    for (int i = 0; i < 26; ++i)
    {
        for (int j = i + 1; j < 26; ++j)
        {
            if (freq[j] > freq[i] || (freq[j] == freq[i] && letters[j] < letters[i]))
            {
                swap(freq[i], freq[j]);      // 交換頻率
                swap(letters[i], letters[j]);  // 交換字母索引
            }
        }
    }

    // 輸出排序結果
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {  // 只輸出出現過的字母
            cout << char('A' + letters[i]) << " " << freq[i] << endl;
        }
    }

    return 0;
}