#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        c3-=a3; // since these items have only one choice
        c1-=a1;
        c2-=a2;
        if(c1<0 || (c2<0 || c3<0)) cout<<"NO"<<endl;
        else {
            int extra=0;
            c1-=a4;
            c2-=a5;
            if(c1<0) extra+=abs(c1);
            if(c2<0) extra+=abs(c2);
            if(c3>=extra) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }

    }
    return 0;
}