#include<iostream>
using namespace std;
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
#include<set>
int main(){
    int t;
    cin>>t;
    
    for(int i=0; i<t; i++){
        bool possible=true;
        long long n,c,d;
        cin>>n>>c>>d;
        vector<long long > nums(n*n);
        int a=INT_MAX;
        multiset<long long> st;
        for(int i=0; i<(n*n); i++) {
            cin>>nums[i];
            if(nums[i]<a) a=nums[i]; 
            st.insert(nums[i]);
        }
        vector<vector<long long>> mat(n,vector<long long>(n));
        for(int i=0; i<n; i++){
            long long f=a;
            if(i!=0) f=mat[i-1][0]+c;
            for(int j=0; j<n; j++){
                mat[i][j]=f+j*d;
                if(st.find(mat[i][j])==st.end()){
                    possible=false; break;}
                else { 
                st.erase(st.find(mat[i][j]));
                }
                
                }
            
            
        }
        if(possible) cout<<"YES";
        else cout<<"NO";
        cout<<endl;

    }
}