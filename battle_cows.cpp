#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0; i<n; i++) cin>>nums[i];
        int my_rating=nums[k-1];
        int pos_1=INT_MAX;
        int pos_2=INT_MAX;
        for(int i=0; i<n; i++){
            if(nums[i]>my_rating){
                if(pos_1==INT_MAX) pos_1=i;
                else {pos_2=i; break;}}
        }
        if(pos_1==INT_MAX && pos_2==INT_MAX){// nothing greater
        cout<<n-1;
        }
        else if(pos_1!=INT_MAX && pos_2==INT_MAX){ // only one greater
        if(pos_1>k-1){
            cout<<pos_1-1;
        }
        else{
            int b=k-1-pos_1;
            if(pos_1==0) b--;
            cout<<max(pos_1-1,b);

        }}
        else{ 
        if(pos_2<k-1){
            cout<<max(pos_1-1,pos_2-1-pos_1);
        }
        else if(pos_1<k-1){
            cout<<max(pos_1-1,pos_2-1-pos_1);
        }
        else{
            cout<<pos_1-1;
        }}
        cout<<endl;

    }
    
}