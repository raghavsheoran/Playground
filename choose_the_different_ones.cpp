#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,m,k;
        cin>>n>>m>>k;
        vector<bool> present_a(k+1,false);
        vector<bool> present_b(k+1,false);
        for(int i=0; i<n; i++) {int temp;
        cin>>temp;
        if(temp<=k) present_a[temp]=true;}
        for(int i=0; i<m; i++) {int temp;
        cin>>temp;
        if(temp<=k) present_b[temp]=true;}
        int a=0,b=0,c=0;
        bool possible=true;
        for(int i=1; i<=k; i++){
            if(present_a[i] && present_b[i]){c++;}
            else if(present_a[i]) a++;
            else if(present_b[i]) b++;
            else possible=false;
        }
        if(possible==false) cout<<"NO"<<endl;
        else if((a<=k/2 && b<=k/2) && ((k/2-(a))+(k/2-(b)))<=c) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}