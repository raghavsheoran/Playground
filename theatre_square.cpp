#include<iostream>
using namespace std;
int main(){
    long long m,n,a;
    cin>>m>>n>>a;
    long long c,d;
    c=m/a;
    if(m%a!=0) c++;
    d=n/a;
    if(n%a!=0) d++;
    cout<<c*d;
    return 0;

}