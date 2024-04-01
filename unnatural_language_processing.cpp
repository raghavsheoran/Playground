#include<iostream>
using namespace std;
#include<string>
bool is_c(char c){
    return (c=='b' ||c=='c') || c=='d';
}
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0; i<n; i++){
            char c=s[i];
            if(c=='a' || c=='e'){ // v
            cout<<c;
            if((i!=n-2) && (is_c(s[i+1]) && !is_c(s[i+2]))){
                cout<<'.';
            }}
            else{ // c
            cout<<c;
            if(i!=n-1 && is_c(s[i+1])){
                cout<<'.';
            }

            }
        }
        cout<<endl;


    }
    return 0;
}