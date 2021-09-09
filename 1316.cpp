#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;   //단어 개수 선언
    cin >> n;
    int g = 0;   //그룹 개수 선언, 초기화

    for (int i = 0; i < n; i++) {
        string str;
        bool c1 = true;
        cin >> str;   //단어 입력 받음
        for (int k = 0; k < str.length(); k++) {
            char l = str[k];
            bool c2 = false;
            for (int p = k + 1; p < str.length(); p++) {
                if (l != str[p])c2 = true;
                if (c2) {
                    if (l == str[p])c1 = false;
                }
            }
        }
        if (c1) g++;
    }
    cout << g;
    return 0;
}