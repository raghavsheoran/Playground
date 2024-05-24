#include<iostream>
using namespace std;
#include<string>
int main(){
    string s;
    cin>>s;
    int l=0,u=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z') l++;
        else u++;
        
    }
    if(l>=u){
       for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z') {}
        else {
            s[i]=char(int(s[i])+97-65);
        }
        
    } 
    }
    else{
       for(int i=0; i<s.length(); i++){
        if(s[i]>='a' && s[i]<='z') {
            s[i]=char(int(s[i])-97+65);
        }
        
        
    }  
    }
    for(int i=0; i<s.length(); i++){
        cout<<s[i];
    }

}