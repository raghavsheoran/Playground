#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        int e=n;
        int o=1;
        for(int i=0; i<n; i++){
            if(i%2==0){nums[i]=e; e--;}
            else{nums[i]=o; o++;}
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        
    }
}