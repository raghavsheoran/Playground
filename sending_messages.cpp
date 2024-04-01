#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        vector<long long> time(n);
        if(a*(time[0]-0)>b)f=f-1;// battery spent at time 0
        for(int i=0; i<n; i++) cin>>time[i];
        long long prev=0; // the last time it was on
        bool possible=true;
        for(int i=0; i<n; i++){
            long long battery=f-min(a*(time[i]-prev),b);
            if(battery<=0) {possible=false; break;}
            f=battery; prev=time[i];
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;

}