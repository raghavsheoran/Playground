#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int res=0;
        for(int i=0; i<n; i++){
            if(s[i]=='+') res++;
            else res--;

        }
        cout<<abs(res)<<endl;
    }
    return 0;
}