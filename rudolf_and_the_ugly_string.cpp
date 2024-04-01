#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string res;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            if(s[i]=='m' || s[i]=='p'){
                string t=s.substr(i,3);
                if(t=="map"){res+="ma"; i=i+2;}
                else if(t=="pie"){res+="pi"; i=i+2;}
                else res+=s[i];
            }
            else res+=s[i];
        }
        cout<<s.length()-res.length()<<endl;
    }
    return 0;
}