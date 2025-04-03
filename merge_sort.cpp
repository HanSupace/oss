#include <iostream>
using namespace std;
int arr[100001];
int m_arr[100001];
int n;

void merge(int left, int mid, int right){
    int l=left;
    int j=mid+1;
    int index=left;
    while(l<=mid && j<=right){
        if(arr[l]<arr[j]){
            m_arr[index++]=arr[l];
            l++;
        }else{
            m_arr[index++]=arr[j];
            j++;
        }
    }

    while(l<=mid){
        m_arr[index++]=arr[l];
        l++;
    }
    while(j<=right){
        m_arr[index++]=arr[j];
        j++;
    }
    

    for(int i=left; i<=right;i++){
        arr[i]=m_arr[i];
    }
}

void m_sort(int left, int right){
    int mid=(left+right)/2;
    if(left<right){
        m_sort(left,mid);
        m_sort(mid+1,right);
        merge(left,mid,right);
    }
}

int main(){
    
    
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }

    m_sort(0,n-1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " "; 
    }

}