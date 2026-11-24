#include <iostream>
#include <string>
#include <numeric>
using namespace std;

int tod(string a){
    int s=0;
    for (char c:a)s=s*2+c-'0';
    return s;
}

int main() {
    int t;
    cin>>t;
    for (int tc=1;tc<=t;tc++){
        string s,l;
        cin>>s>>l;
        int sd=tod(s),ld=tod(l);
        cout<<"Pair #"<<tc<<": ";
        if (gcd(sd,ld)>1)cout<<"All you need is love!\n";
        else cout<<"Love is not all you need!\n";
    }
    return 0;
}