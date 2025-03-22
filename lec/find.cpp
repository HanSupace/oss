#include <iostream>
#include <algorithm>

using namespace std;

int N;
int sequence[1000];

class Lo{
    public:
        int x,y;
    Lo(int x=0, int y=0){
        this->x=x;
        this->y=y;
    }
};

bool cmp(Lo a, Lo b){
    if(a.x==b.x){
        return a.y < b.y;
    }
    return a.x<b.x;
}

int main() {
    cin >> N;
    Lo lo[N];
    for (int i = 0; i < N; i++) {
        cin >> sequence[i];
        lo[i]=Lo(sequence[i],i+1);
    }
    sort(lo,lo+N,cmp);

    int num_arr[N+1];
    int num[N];
    for(int i=0 ;i<N; i++){
        num[i] = lo[i].y;
    }
    for(int i=0; i<N; i++){
        num_arr[num[i]]=i+1;
    }
    for(int i=1; i<=N; i++){
        cout<<num_arr[i]<<" ";
    }

    

    return 0;
}
