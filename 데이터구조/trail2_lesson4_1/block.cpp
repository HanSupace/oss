#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];
int kan[2000]={};

int main() {
    cin >> n;

    int cur_lo = 1000;

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
        
    }

    for(int i=0; i<n; i++){
        if(dir[i]=='R'){
            for(int j=0; j<x[i]; j++){
                kan[cur_lo++]++;
                
            }
        }else{
            for(int j=0; j<x[i]; j++){
                kan[--cur_lo]++;
                
            }

        }
    }
    int cnt=0;
    for(int i=0; i<2000;i++){
        if(kan[i]>=2){
            cnt++;
        }
    }
    cout<<cnt;

    return 0;
}