#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for (int tc=1;tc<=t;tc++){
        int a,b;
        cin>>a>>b;
        if (a%2==0)a++;
        if (b%2==0)b--;
        long long s=(a+b)*((b-a)/2+1)/2;
        cout<<"Case "<<tc<<": "<<s<<'\n';
    }
    return 0;
}