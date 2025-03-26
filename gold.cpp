#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
int grid[20][20];
int dx[4]={1,1,-1,-1};
int dy[4]={-1,1,1,-1};
int max_g=0;

int cal(int a){
    return a*a+(a+1)*(a+1);
}

bool inrange(int a, int b){
    return a>=0 && a<n && b>=0 && b<n;
}

int check(int a, int b, int c){
    int gold_num = 0;
    gold_num +=grid[a][b];

    for(int cur_k = 1; cur_k<=c; cur_k++){
        int cur_row=a-cur_k;
        int cur_col=b;

        for(int rep=0; rep<4; rep++){
            for(int step=0; step<cur_k; step++){
                if(inrange(cur_row,cur_col)){
                    gold_num+=grid[cur_row][cur_col];
                }
                cur_row+=dx[rep];
                cur_col+=dy[rep];
            }
        }

    }
    return gold_num;


}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<=2*(n-1); k++){
            int a = check(i,j,k);
            if(cal(k)<=a*m){
                max_g = max(max_g,a);
            }
            }
        }
    }
    cout << max_g;

    return 0;
}
