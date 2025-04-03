#include <iostream>
#include <fstream>

using namespace std;

int n,b;

int sum=0;
int main(){
    
    ifstream fin;
    fin.open("new_file.dat");
    if(!fin){
        cerr << "오류";
    }

    while(fin >> n){
        sum +=n;
    }

    fin.close();

    ofstream fout("sum.txt");
    if(!fout){
        cerr << "오류";
    }
    fout << sum;
    fout.close();
    cout << sum;
}