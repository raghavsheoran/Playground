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
        for(int i=0; i<n; i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        if(nums[0]==nums[nums.size()-1]) cout<<-1<<endl;
        else {
            vector<int> a,b;
            int pos;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]!=nums[nums.size()-1]) a.push_back(nums[i]);
                else {pos=i; break;}
            }
            for(int i=pos; i<nums.size(); i++){
                b.push_back(nums[i]);
            }
            cout<<a.size()<<" "<<b.size()<<endl;
            for(int i=0; i<a.size(); i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<b.size(); i++){
                cout<<b[i]<<" ";
            }

            cout<<endl;

        }

    }
    return 0;
}