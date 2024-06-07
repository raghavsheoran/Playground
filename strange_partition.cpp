#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,x;
        cin>>n>>x;
        vector<int> nums(n);
        long long max_beauty=0;
        long long min_beauty=0;
        long long sum=0;
        for(int i=0; i<n; i++){
            cin>>nums[i];
            max_beauty+=(nums[i]/x);
            sum+=nums[i];
            if(nums[i]%x!=0) max_beauty++;
        }

        min_beauty=sum/x;
        if(sum%x!=0) min_beauty++;
        
        cout<<min_beauty<<" "<<max_beauty<<endl;
    }
}