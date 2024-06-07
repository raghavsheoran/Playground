#include<iostream>
using namespace std;
#include<string>
long long gcd(long long int a, long long int b) 
{ 
  if (b == 0) 
    return a; 
  return gcd(b, a % b); 
} 
  
// Function to return LCM of two numbers  
long long lcm(int a, int b) 
{ 
    return (a / gcd(a, b)) * b; 
} 
int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        string s,t;
        cin>>s>>t;
        int a=0,b=0;
        for(int i=0; i<s.length(); i++) {if(s[i]=='a') a++; else b++;}
        for(int i=0; i<t.length(); i++) {if(t[i]=='a') a++; else b++;}
        if(s==t) cout<<s;
        else if(a==0) for(int i=0; i<lcm(s.length(),t.length()); i++) cout<<'b';
        else if(b==0) for(int i=0; i<lcm(s.length(),t.length()); i++) cout<<'a';
        else{
            if(s.length()%t.length() ==0 || t.length()%s.length()==0) {
                bool possible=true;
                if(s.length()>t.length()){
                    for(int i=0; i<s.length(); i+=t.length()){
                        if(s.substr(i,t.length())!=t) {possible=false; break;}
                    }
                    if(possible) cout<<s;
                    else cout<<-1;
                }
                else{
                    for(int i=0; i<t.length(); i+=s.length()){
                        if(t.substr(i,s.length())!=s) {possible=false; break;}
                    }
                    if(possible) cout<<t;
                    else cout<<-1;

                }


            }
            else cout<<-1;
        }
        cout<<endl;
    }

}
