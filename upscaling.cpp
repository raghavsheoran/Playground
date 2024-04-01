#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<vector<char>> vec(2*n,vector<char>(2*n));
        for(int i=0; i<2*n; i++){
            for(int j=0; j<2*n; j++){
                if(((i/2)%2==0 && (j/2)%2==0) || ((i/2)%2!=0 && (j/2)%2!=0) ) vec[i][j]='#';
                else vec[i][j]='.';
            }
        }
        for(int i=0; i<2*n; i++){
            for(int j=0; j<2*n; j++){
                cout<<vec[i][j];
            }
            cout<<endl;
        }
    }
    return 0;

}