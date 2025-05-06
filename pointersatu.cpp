#include <iostream>
using namespace std;
class mahasiswa{
    public:
    int nim;
    void shownim(){
        cout << "No induk ="<<nim<<endl;
    }
};

int main(){
    mahasiswa mhs(1); //object mhs
    mhs.shownim();//member access operator

    mahasiswa &refmhs =mhs;//pointer reference refmhs
    refmhs.nim = 2; // member acces operator
    mhs.shownim();

    mahasiswa *pmhs = &mhs; //pointer dereference pmhs
    pmhs->nim = 3; //arrow operator
    pmhs->shownim();
    return 0;
}