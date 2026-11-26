#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    while (cin>>n&&n!=0){
        int sum=0;
        string s;
        while (n>0){
            s+=n%2+'0';
            n/=2;
        }
        reverse(s.begin(),s.end());
        for (char c:s)if (c=='1')sum++;
        cout<<"The parity of "<<s<<" is "<<sum<<" (mod 2).\n";
    }
    return 0;
}