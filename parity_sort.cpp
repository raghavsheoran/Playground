#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        vector<int> nums(n);
        vector<int> sorted_nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
            sorted_nums[i]=nums[i];

        }
        bool possible=true;
        sort(sorted_nums.begin(), sorted_nums.end());
        for(int i=0; i<n; i++){
            if(nums[i]%2==0 && sorted_nums[i]%2==0){

            }
            else if(nums[i]%2!=0 && sorted_nums[i]%2!=0){

            }
            else {possible=false; break;}
        }
        if(possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}