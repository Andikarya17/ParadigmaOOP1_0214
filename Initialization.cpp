#include <iostream>
#include <string>
using namespace std;

//Nama Repository = ParadigmaOOP1_4nimbelakang
// minimal commit 15
class mahasiswa {
private:
    const int id;
    string nama;
    float nilai;

    public:
    mahasiswa(int pId, string pNama, float pNilai) :id(pId), nama(pNama), nilai(pNilai) {
    
    }


};