#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long a,b;
    while (cin>>a>>b&&(a!=0||b!=0)){
        int f=0,c=0;
        while (a!=0||b!=0){
            f=(f+a%10+b%10)/10;
            a/=10;
            b/=10;
            if (f)c++;
        }
        if (c==0)cout<<"No carry operation.\n";
        else if (c==1)cout<<"1 carry operation.\n";
        else cout<<c<<" carry operations.\n";
    }
    return 0;
}