#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<char> c(n);
        long long res=0;
        for(int i=0; i<n; i++){
            cin>>c[i];
        }
        for(int i=0; i<n; i++){
            if(c[i]=='@')res+=1;
            else if(c[i]=='*' && c[i-1]=='*') break;
        }
        cout<<res<<endl;
        
    }

}