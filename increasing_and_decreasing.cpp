#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> nums(n);
        nums[n-1]=b;
        nums[0]=a;
        int diff=1;
        for(int i=n-2; i>=1; i--){
            nums[i]=nums[i+1]-diff;
            diff++; // for the next one
        }
        if(nums[0]>nums[1]-diff) cout<<-1;
        else{
            for(int i=0; i<n; i++) cout<<nums[i]<<' ';
        }
        cout<<endl;

    }
}