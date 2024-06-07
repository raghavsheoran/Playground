#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m;
        vector<int> f(m);
        int sum_f=0,sum_s=0;
        int max_a=0;
        int max_b=0;
        for(int i=0; i<m; i++) {cin>>f[i]; sum_f+=f[i]; max_a=max(sum_f,max_a);}
        cin>>n;
        vector<int> s(n);
        for(int i=0; i<n; i++) {cin>>s[i]; sum_s+=s[i]; max_b=max(sum_s,max_b);}
        cout<<max_a+max_b<<endl;
        
    }

}