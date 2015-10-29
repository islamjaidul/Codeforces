#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int sum = 0, i = 0;
    cin >> str;
    char x[5] = {'h', 'e', 'l', 'l', 'o'};
    for(; i < str.length(); i++) if(str[i] == x[0]) {sum++; i++; break;}
    for(; i < str.length(); i++) if(str[i] == x[1]) {sum++; i++; break;}
    for(; i < str.length(); i++) if(str[i] == x[2]) {sum++; i++; break;}
    for(; i < str.length(); i++) if(str[i] == x[3]) {sum++; i++; break;}
    for(; i < str.length(); i++) if(str[i] == x[4]) {sum++; i++; break;}

    if(sum >= 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
