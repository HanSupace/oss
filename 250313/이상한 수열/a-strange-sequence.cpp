#include <iostream>

using namespace std;

int N;

int def(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }

    return def(n/3)+def(n-1);
}

int main() {
    cin >> N;

    int a = def(N);
    cout << a;
    return 0;
}