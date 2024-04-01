#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    long long a,b,c;
    cin>>a>>b>>c;
    int res=0;
    res+=a;
     bool possible=true;
    if(b%3==0) res+=b/3;
    else if((b+1)%3==0 && c>=1){res+=(b+1)/3; c--;}
    else if((b+2)%3==0 && c>=2){res+=(b+2)/3; c=c-2;}
    else possible=false;
    res+=(c/3);
    if(c%3!=0) res++;
    if(possible) cout<<res<<endl;
    else cout<<-1<<endl;

    }
    return 0;

}