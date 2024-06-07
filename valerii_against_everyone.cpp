#include<iostream>
using namespace std;
#include<vector>
#include<unordered_set>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        unordered_set<int> st;
        int n;
        cin>>n;
        bool possible=false;
        for(int i=0; i<n; i++) {
            int k;
            cin>>k;
            if(st.find(k)!=st.end()) possible=true;
            st.insert(k);
            }
            if(possible) cout<<"YES";
            else cout<<"NO";
            cout<<endl;
    }
}