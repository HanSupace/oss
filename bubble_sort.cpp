#include <iostream>

using namespace std;

int main(){
    int a,b;
    int arr[101];
    bool c;
    cin >> a;
    for(int i=0; i<a; i++){
        cin >> b;
        arr[i]=b;
    }

    do{
        c = true;
        for(int i=0; i<a-1; i++){
            if(arr[i]>arr[i+1]){
                int tmp;
                tmp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=tmp;
                c=false;
            }
        }

    }while(c==false);

    for(int i=0; i<a; i++){
        cout << arr[i] << " ";
    }
}