#include<iostream>
using namespace std;
#include<string>
int main(){
    int x=0;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        string s;
        cin>>s;
        for(int i=0; i<3; i++){
            if(s[i]=='+'){x++; break;}
            if(s[i]=='-'){x--; break;}

        }

    }
    cout<<x<<endl;
}