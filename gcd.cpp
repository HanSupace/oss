#include <iostream>

using namespace std;

int num=0;
int n1, n2;
int a[100], b[100];

bool dfs(int x1, int x2){
    for(int i=0; i<x1-x2+1; i++){
        if(a[i]==b[0]){
            num = i;
        }
        int cnt=0;

        for(int j=0; j<x2; j++){
            if(a[num+j]==b[j]){
                cnt++;
                }
            }
            
        if(cnt==x2){
            return true;
        }
    }
                return false;
            
        }
        

    


int main() {
    cin >> n1 >> n2;

    for (int i = 0; i < n1; i++) cin >> a[i];

    for (int i = 0; i < n2; i++) cin >> b[i];

    if(dfs(n1,n2)){
        cout << " Yes";
    }else{
        cout << "No";
    }

    return 0;
}