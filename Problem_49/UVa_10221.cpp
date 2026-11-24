#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    double s,a,arc,chord;
    string d;
    while (cin>>s>>a>>d){
        if (d=="min")a/=60;
        if (a>180)a-=360;
        double n=s+6440;
        arc=2*acos(-1)*n*(a/360);
        a=((180-a)/2)*acos(-1)/180;
        chord=2*n*cos(a);
        printf("%.6f %.6f\n",abs(arc),abs(chord));
    }
}