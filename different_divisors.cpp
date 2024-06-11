#include<iostream>
using namespace std;
#include<vector>
int main(){
    int t;
    cin>>t;
    vector<bool> is_prime(25000,true);
    is_prime[0]=false;
    for(int i=2; i<is_prime.size(); i++){
        if(is_prime[i]){
            for(int j=2*i; j<is_prime.size(); j+=i){
                is_prime[j]=false;
            }
        }
    }

    for(int i=0; i<t; i++){
        int d;
        cin>>d;
        int f,s,t;
        f=1;
        for(int i=f+1; i<is_prime.size(); i++) if(is_prime[i] && i-f>=d){s=i; break;}
        for(int i=s+1; i<is_prime.size(); i++) if(is_prime[i] && i-s>=d){t=i; break;}
        cout<<s*t<<endl;

    }
}