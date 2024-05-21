#include <iostream>
#include <vector>
using namespace std;

#include "anak.h"
#include "ibu.h"

int main()
{
    ibu* varIBu = new ibu("dini");
    ibu* varibu2 = new ibu("novi");
    anak* varAnak1 = new anak("tono");
    anak* varaAnak2 = new anak("rini");
    anak* varAnak3 = new anak("Dewi");

    varIBu->tambahAnak(varAnak1);
    varIBu->tambahAnak(varaAnak2);
    varibu2->tambahAnak(varAnak3);
    varibu2->tambahAnak(varAnak1);


    varIBu->cetakAnak();
    varIBu->cetakAnak();

    delete varIBu;
    delete varibu2;
    delete varAnak1;
    delete varaAnak2;
    delete varAnak3;

    return 0;
}
