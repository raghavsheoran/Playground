#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(i==0){
            if(s[i]<='z' && s[i]>='a'){s[i]=char(int(s[i])-97+65);}
        }
        cout<<s[i];


    }
}