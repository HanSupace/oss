#include <iostream>

using namespace std;

int n;
int cnt = 0;

int def(int a){
    if(a==1){
        return 0;
    }

    if(a%2==0){
        def(a/2);
        cnt++;
    }else{
        def(3*a+1);
        cnt++;
    }
    return cnt;

}

int main() {
    cin >> n;

    int x = def(n);
    cout << x;
    return 0;
}