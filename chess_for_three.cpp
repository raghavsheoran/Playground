#include<iostream>
using namespace std;
int res(int a, int b, int c){
    int ans=0;
    for(int x=0; x<=(a+b+c)/2; x++){
        for(int y=0; y<=(a+b+c)/2-x; y++){
            for(int z=0; z<=(a+b+c)/2-x-y; z++){
                int aa,bb,cc;
                aa=a-(x+z);
                bb=b-(x+y);
                cc=c-(y+z);
                if(aa>=0 && aa%2==0 && bb>=0 && bb%2==0 && cc>=0 && cc%2==0) ans=max(ans,x+y+z);

            }
        }
    }
    return ans;

}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b+c)%2!=0) cout<<-1<<endl;
        else{
        cout<<res(a,b,c)<<endl;
        }
    }
    return 0;

}


