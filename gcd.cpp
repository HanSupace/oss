#include <iostream>

using namespace std;

int n, m;

int gcd(int n, int m){
    if(n%m==0) return m;

    return gcd(m,n%m);
}

int main() {
    cin >> n >> m;

    int a = gcd(n,m);

    int b = (n*m)/a;

    cout <<b;

    return 0;
}