#include <iostream>
#include <string>
using namespace std;

class orang
{
public:
    string nama;

    orang(string pNama) :
        nama(pNama)
    {
        cout << "orang dibuat\n" << endl;
    }
    ~orang()
    {
        cout << "orang dihapus\n" << endl;
    }

    int jumlah(int a, int b)
    {
        return a + b;
    }

};

class pelajar : public orang
{
public:
    string sekolah;

    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah)
    {
        cout << "Pelajar dibuat\n" << endl;
    }
    ~pelajar()
    {
        cout << "Pelajar dihapus\n" << endl;
    }
    string perknalan()
    {
        return "Hallo, Nama Saya" + nama + "Dari Sekolah " + sekolah + "\n\n"
    }

int main()
{
    pelajar siswa1("Andi laksono", "SMAN 1 Bantul");
    cout << siswa1.perknalan();
    cout << "Hasil = " << siswa1.jumlah(10, 90) <<  endl;
    return 0;
}
