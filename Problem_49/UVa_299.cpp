#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        vector <int> k(n);
        int s=0;
        for (int &x:k)cin>>x;
        for (int i=0;i+1<n;i++)
            for (int j=i+1;j<n;j++)
                if (k[i]>k[j]){
                    swap(k[i],k[j]);
                    s++;
                }
        cout<<"Optimal train swapping takes "<<s<<" swaps.\n";
    }
    return 0;
}