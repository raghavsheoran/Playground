#include<iostream>
using namespace std;
#include<string>
#include<vector>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
       vector<int> excess(s.length());
       int e=0;
       int z=-1;
       for(int i=0; i<s.length(); i++){
        if(s[i]=='1') e++; 
        else e--;
        excess[i]=e;
        if(e==0) z=i;
       }
       if(e==0) cout<<0;
       else if(e>0){ // 1 in excess
       int m=0;
       for(int j=z+1; j<s.length(); j++){
       if(s[j]=='0') m++;}
       for(int j=z+1; j<s.length(); j++){
       if(m==0){cout<<s.length()-1-(j+1); break;}
       if(s[j]=='1') m--;
       
       }
       }
       else{ // 0 in excess
       int m=0;
       for(int j=z+1; j<s.length(); j++){
       if(s[j]=='1') m++;}
       for(int j=z+1; j<s.length(); j++){
       if(m==0){cout<<s.length()-1-(j+1); break;}
       if(s[j]=='0') m--;
       
       }
       }
       cout<<endl;
    }

}