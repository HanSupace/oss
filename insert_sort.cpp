#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;

    int arr[101];

    for(int i=0; i<a; i++){
        cin >> arr[i];
    }

    for(int i=1; i<a; i++){
        int j=i-1;
        int key = arr[i];
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;    
        }
        arr[j+1]=key;
    }

    for(int i=0; i<a; i++){
        cout << arr[i]<<" ";
    }
}