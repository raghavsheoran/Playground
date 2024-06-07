#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    int m,n;
    cin>>m>>n;
    vector<vector<char>> arr(m ,vector<char>(n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int match=0;
    string to_match="vika";
    int j=0;
    while(match<=3 && j<n){
        for(int i=0; i<m; i++){
            if(arr[i][j]==to_match[match]){match++; break;}
        }
    j++;
    }
    if(match>3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;}


}