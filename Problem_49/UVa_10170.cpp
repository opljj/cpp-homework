#include <iostream>
using namespace std;

int main() {
    long long a,b;
    while (cin>>a>>b){
        long long sum=0;
        do{
            sum+=a;
        }while (sum<b&&a++);
        cout<<a<<'\n';
    }
    return 0;
}