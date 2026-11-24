#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isprime(int n){
    for (int i=2;i*i<=n;i++)
        if (n%i==0)return false;
    return true;
}

int main() {
    int n;
    while (cin>>n){
        string s=to_string(n);
        reverse(s.begin(),s.end());
        int k=stoi(s);
        bool p=isprime(n),e=isprime(k);
        if (p&&e&&n!=k)cout<<n<<" is emirp.\n";
        else if (p)cout<<n<<" is prime.\n";
        else cout<<n<<" is not prime.\n";
    }
    return 0;
}