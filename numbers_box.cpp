#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int m,n;
        cin>>m>>n;
        int min_val=INT_MAX;
        long long sum=0;
        int neg=0;
        vector<vector<int>> arr(m,vector<int>(n));
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++) {
                cin>>arr[i][j];
                sum+=abs(arr[i][j]);
                min_val=min(min_val,abs(arr[i][j]));
                if(arr[i][j]<0) neg++;
            }
        }
        if(neg%2==0) cout<<sum<<endl;
        else cout<<sum-2*min_val<<endl;

    }

}