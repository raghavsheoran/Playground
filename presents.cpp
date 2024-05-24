#include<iostream>
using namespace std;
#include<vector>
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> answer(n);
    for(int i=0; i<n; i++) {cin>>nums[i]; answer[nums[i]-1]=i+1;}
    for(int i=0; i<n; i++) cout<<answer[i]<<" ";

}