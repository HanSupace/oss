#include <iostream>

using namespace std;

int n;
int t;
int grid[201][201];

int main() {
    cin >> n >> t;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    for(int i=0; i<t; i++){
        int tmp = grid[0][n-1];
        for(int j=n-1; j>=1; j--){
            grid[0][j]=grid[0][j-1];
        }
        grid[0][0]=grid[1][n-1];
        for(int j=n-1;j>=1;j--){
            grid[1][j]=grid[1][j-1];
        }
        grid[1][0]=tmp;
    }


    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
