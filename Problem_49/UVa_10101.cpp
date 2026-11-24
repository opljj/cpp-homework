#include <iostream>
#include <cmath>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    long long n;
    string s[4]={"shata","hajar","lakh","kuti"};
    int u[4]={10,100,100,100};
    int t=1;
    while (cin>>n){
        cout<<setw(4)<<t++<<".";
        if (n==0){cout<<" 0\n";continue;}
        int l=n%100;
        n/=100;
        vector <int> k;
        int c=0;
        while (n>0){
            k.push_back(n%u[c%4]);
            n/=u[c%4];
            c++;
        }
        for (int i=(int)k.size()-1;i>=0;i--){
            if (k[i]>0)
                cout<<" "<<k[i]<<" "<<s[i%4];
            else if (i%4==3)
                cout<<" kuti";
        }
        if (l>0)cout<<" "<<l<<'\n';
        else cout<<'\n';
    }
    return 0;
}