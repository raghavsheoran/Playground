#include<iostream>
using namespace std;
#include<string>
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
    string s;
    cin>>s;
    char letter =s[0];
    char number =s[1];
    int asc=96;
    for(int i=1; i<=8; i++){
        if((i)!=stoi(s.substr(1,1)))cout<<letter<<i<<endl;
        if(char(asc+i)!=letter)cout<<char(asc+i)<<number<<endl;
    }}
    return 0;

}