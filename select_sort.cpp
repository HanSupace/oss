#include <iostream>

using namespace std;

int main(){
    int n,a;
    int arr[101];
    int tmp;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        arr[i]=a;
    }

    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        tmp=arr[i];
        arr[i]=arr[min];
        arr[min]=tmp;

    }
    for(int i=0; i<n;i++){
        cout << arr[i] << " ";
    }
}