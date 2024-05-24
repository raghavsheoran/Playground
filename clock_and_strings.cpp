#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        vector<int> f={a,b};
        vector<int> e={c,d};
        sort(f.begin(),f.end());
        sort(e.begin(),e.end());
        int p=0;
        for(int i=f[0]; i<=f[1]; i++){
            if(i==c || i==d) p++;
        }
        if(p==0 || p==2) cout<<"NO" <<endl;
        else cout<<"YES"<<endl;

    }
}