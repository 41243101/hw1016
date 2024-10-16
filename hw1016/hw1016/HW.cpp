#include <iostream>
#include <string>
#include <algorithm>  // �ޤJ swap() �禡
using namespace std;
int main() {
    int n;
    cin >> n;
    cin.ignore();  // ��������Ÿ�
    int freq[26] = { 0 };  // �ΰ}�C���� A-Z ���W�v

    // Ū����J���C�@��
    while (n--)
    {
        string line;
        getline(cin, line);

        // �v�r���B�z�C�@�檺��J
        for (char c : line)
        {
            if (c >= 'a' && c <= 'z')
            {
                freq[c - 'a']++;  // �p�g�r��
            }
            else if (c >= 'A' && c <= 'Z')
            {
                freq[c - 'A']++;  // �j�g�r��
            }
        }
    }

    // �Ψ�Ӱ}�C�Ӧs�r���P�����W�v
    int letters[26];
    for (int i = 0; i < 26; ++i)
    {
        letters[i] = i;  // ��l�Ʀr������
    }

    // �Ƨ��W�v�P�r������
    for (int i = 0; i < 26; ++i)
    {
        for (int j = i + 1; j < 26; ++j)
        {
            if (freq[j] > freq[i] || (freq[j] == freq[i] && letters[j] < letters[i]))
            {
                swap(freq[i], freq[j]);      // �洫�W�v
                swap(letters[i], letters[j]);  // �洫�r������
            }
        }
    }

    // ��X�Ƨǵ��G
    for (int i = 0; i < 26; ++i)
    {
        if (freq[i] > 0)
        {  // �u��X�X�{�L���r��
            cout << char('A' + letters[i]) << " " << freq[i] << endl;
        }
    }

    return 0;
}