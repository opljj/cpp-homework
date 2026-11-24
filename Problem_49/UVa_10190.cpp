#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,d;
    while (cin>>n>>d){
        if (d<2){cout<<"Boring!\n";continue;}
        bool b=false;
        vector <int> k;
        do{
            k.push_back(n);
            if (n%d!=0){b=true;break;}
            n/=d;
        }while (n>1);
        if (b)cout<<"Boring!\n";
        else {
            for (int x:k)cout<<x<<" ";
            cout<<"1\n";
        }
    }
    return 0;
}