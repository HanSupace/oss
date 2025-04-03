#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[100001];
    vector<int> new_arr[10];
    
    for(int i=0 ;i<n; i++){
        cin >> arr[i];
    }

    int pos = 10;
    int p=1;

    for(int i=0; i<6; i++){
        for(int j=0; j<n; j++){
            int c = (arr[j]/p)%pos;
            new_arr[c].push_back(arr[j]);
        }
        int index=0;
        for(int j=0; j<10; j++){
            for(int s=0; s<new_arr[j].size(); s++){
                arr[index++]=new_arr[j][s];
            }
            new_arr[j].clear();
        }
        p*=10;
    }   

    for(int i=0; i<n; i++){
        cout << arr[i]<< " ";
    }


}