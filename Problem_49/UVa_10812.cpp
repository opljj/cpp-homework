#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--){
        int a,b;
        cin>>a>>b;
        int x=(a+b)/2,y=a-x;
        if (y>x)swap(x,y);
        if (x<0||y<0||abs(x-y)!=b)cout<<"impossible\n";
        else cout<<x<<" "<<y<<'\n';
    }
    return 0;
}