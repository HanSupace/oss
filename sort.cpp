#include <iostream>
#include <algorithm>

using namespace std;
int arr[100];
int cnt=0;
int ma=0;

int lcm(int a,int b){
    int gcd=0;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return a*b/gcd;
}

int getgcd(int a){
    if(a==0){
        return arr[0];
    }

    return lcm(arr[a],getgcd(a-1));
}


int main(){
    int a;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> arr[i];
    }
    int x = getgcd(a-1);
    cout << x;
    
    
}
