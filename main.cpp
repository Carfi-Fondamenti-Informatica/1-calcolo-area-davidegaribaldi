#include <iostream>
using namespace std;

int main() 
{
    float a = 0, b = 0, c = 0,areatriangolo = 0, areaquadrato = 0, arearettangolo = 0, areatrapezio = 0;
    cin>>a>>b>>c;
    areatriangolo = (a * b) / 2;
    areaquadrato=a*a;
    arearettangolo=a*b;
    areatrapezio=(a+b)*c/2;
    cout<<areatriangolo<<endl;
    cout<<areaquadrato<<endl;
    cout<<arearettangolo<<endl;
    cout<<areatrapezio<<endl;


    return 0;
}

