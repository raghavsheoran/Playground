#include<iostream>
using namespace std;
#include<vector>
bool is_inc(int n){
    return n%10>=(n/10)%10;
}

int main(){
   
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        bool is_possible=true;
        int nn;
        cin>>nn;
        vector<int> nums(nn);
        for(int i=0; i<nn; i++) cin>>nums[i];
        int p=INT_MIN;
        int n;
        for(int i=0; i<nn; i++){
            if(i!=nn-1) n=nums[i+1];
            else n=INT_MAX;
            if(nums[i]>=10 && is_inc(nums[i])){ // breakable
                bool plan_a=true, plan_b=true;
                int a=nums[i]%10;
                int b=(nums[i]/10)%10;
                if(b<p || a>n) {plan_a=false;}  // cant do the breaking thing acc to rules
                if(nums[i]<p || nums[i]>n) {plan_b=false;} // cant do nothing
                if(plan_a==false && plan_b==false){is_possible=false; break;}
                else if(plan_a && plan_b){p=a;}
                else if(plan_a){p=a;}
                else p=nums[i];
            }
            else{
                if(nums[i]<p || nums[i]>n) {is_possible=false; break;}
                else p=nums[i];
            }

        }
        if(is_possible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}