#include<iostream>
using namespace std;
#include<vector>
#include<string>
#include<utility>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<vector<int>> mat(n,vector<int>(n,0));
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int j=0; j<n; j++){
                mat[i][j]=stoi(s.substr(j,1));
            }
        }
        
        bool sq=false;
        int r=0;
        for(int i=0; i<n; i++){
            int row=0;
            for(int j=0; j<n; j++){
                if(mat[i][j]==1) row++;
            }
            if(r!=0 && row==r) {sq=true; break;}
            else if(r!=0 && row!=r) {sq=false; break;}
            r=row;
        }
        if(sq) cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;

    }
    return 0;
}