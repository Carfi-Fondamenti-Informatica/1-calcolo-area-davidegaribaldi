#include <iostream>
using namespace std;

int main() {
    float a = 0, b = 0, c = 0,areatriangolo = 0, areaquadrato = 0, arearettangolo = 0, areatrapezio = 0;
    cin>>a>>b>>c;
    areatriangolo = (a * b) / 2;
    areaquadrato=a*a;
    arearettangolo=a*b;
    areatrapezio=(a+b)*c/2;
    cout<<"L'area del triangolo e' "<<areatriangolo<<endl;
    cout<<"L'area del rettangolo e' "<<arearettangolo<<endl;
    cout<<"L'area del trapezio e' "<<areatrapezio<<endl;
    cout<<"L'area del quadrato e' "<<areaquadrato<<endl;

    return 0;
}
