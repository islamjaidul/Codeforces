#include<iostream>
using namespace std;
int main()
{
    int arr[100], arr2[100];
    int x = 0, y = 0, r, b, count = 0;
    cin >> r >> b;
    for(int i = 1; i <= r; i++) {
        arr[x] = i;
        ++x;
    }
    for(int i = 1; i <= b; i++) {
        arr2[y] = i;
        ++y;
    }

    int smaller, larger;
    if(b < r) smaller = b;
    else smaller = r;

    if(b > r) larger = b;
    else larger = r;

    for(int i = 0; i < smaller; i++) {
        if(arr[i] == arr2[i]) count++;
    }
    int result = larger - smaller;
    result = result / 2;
    cout << count << " " << result;
}
