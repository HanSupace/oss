#include <iostream>

using namespace std;

int N;

int def(int n){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 4;
    }

    return (def(n-1)*def(n-2))%100;
}

int main() {
    cin >> N;

    int a = def(N);
    cout << a;
    return 0;
}