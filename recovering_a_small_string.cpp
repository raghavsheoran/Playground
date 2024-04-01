#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int i=0; i<3; i++){
            int left=3-i-1;
            left=left*26;
            if(n-left<=0){cout<<'a'; n=n-1;}
            else {cout<<char(96+(n-left)); n=left;}
        }
        cout<<endl;
    }
    return 0;
}