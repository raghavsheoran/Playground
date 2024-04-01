#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<map>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int l,r,k;
        cin>>l>>r>>k;
        vector<int> left(l);
        for(int i=0; i<l; i++) cin>>left[i];
        vector<int> right(r);
        for(int i=0; i<r; i++) cin>>right[i];
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        int res=0;
        for(int i=0; i<l; i++){
            int needed=k-left[i];
            for(int j=0; j<r; j++){
                if(right[j]<=needed) res++;
            }
        }
        cout<<res<<endl;
        
    }
    return 0;
}