#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int sum = 0;
    char store[100];
    string str;
    cin >> str;
    for(int i = 0; i < str.length(); i++) {
       store[i] = str[i];
    }
    int range = str.length();
    sort(store, store + range);
    for(int i = 0; i < range; i++) {
        if(store[i] != store[i+1]) {
            sum++;
        }
    }

    if(sum % 2 == 0) {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
}
