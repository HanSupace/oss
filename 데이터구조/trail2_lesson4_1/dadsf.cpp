#include <iostream>

using namespace std;

int a, b, c;

int def(int n){
    if(n<10){
        return n;
    }

    return def(n/10)+n%10;
}

int main() {
    cin >> a >> b >> c;
    int num = a*b*c;
    int x= def(num);

    cout << x;

    return 0;
}
