#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    while (cin>>s&&s!="0"){
        int sum=0,k=1;
        for (char c:s)sum+=c-'0';
        while (sum>10){
            int p=0;
            while (sum>0){
                p+=sum%10;
                sum/=10;
            }
            sum=p;
            k++;
        }
        if (sum%9==0)cout<<s<<" is a multiple of 9 and has 9-degree "<<k<<".\n";
        else cout<<s<<" is not a multiple of 9.\n";
    }
    return 0;
}