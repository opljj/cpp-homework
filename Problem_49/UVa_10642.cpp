#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int tc=1;tc<=t;tc++){
        long long x,y,dx,dy;
        cin>>x>>y>>dx>>dy;
        long long s=(x+y+dx+dy)*(dx+dy-x-y+1)/2-x-dy+(dx+dy-x-y);
        cout<<"Case "<<tc<<": "<<s<<'\n';
    }
    return 0;
}