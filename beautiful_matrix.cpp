#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<vector<int>> mat(5,vector<int> (5));
    int row,col;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){row=i; col=j;}
        }
    }
    cout<<abs(row-2)+abs(col-2);
    
}