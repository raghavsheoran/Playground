#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s;
        cin>>s;
        int h=stoi(s.substr(0,2));
        int m=stoi(s.substr(3,2));
        bool evening=false;
        if(h>=12) {h-=12; evening=true;}
        if(h==0) h=12;
        string answer;
        answer+=to_string(h);
        answer+=':';
        if(m<10) answer+='0';
        answer+=to_string(m);
        answer+=' ';
        if(evening) answer+="PM";
        else answer+="AM";
        if(h<10) cout<<'0'<<answer<<endl;
        else cout<<answer<<endl;



    }
    return 0;
}