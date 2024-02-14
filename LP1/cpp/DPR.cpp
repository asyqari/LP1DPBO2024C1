#include <iostream>
#include <string>

// using std namespace
using namespace std;

class DPR
{
private:
    // berisi atribut private karena ini data penting objeknya
    int dataID;
    string nama;
    string namaBidang;
    string namaPartai;

public:
    // construktor pertama yang isi nya defaul tanpa parameter atribut
    DPR()
    {
        this->dataID = -1;
        this->nama = "";
        this->namaBidang = "";
        this->namaPartai = "";
    }
    // versi ada parameter atribut biar langsung duar jadi lengkap
    DPR(int dataID, string nama, string namaBidang, string namaPartai)
    {
        this->dataID = dataID;
        this->nama = nama;
        this->namaBidang = namaBidang;
        this->namaPartai = namaPartai;
    }

    // method create update, delete

    // getter setter
    // ambil data dari private lalu return
    // set atribut private dengan parameter
    int getID()
    {
        return this->dataID;
    }
    void setID(int ID)
    {
        this->dataID = ID;
    }

    string getNama()
    {
        return this->nama;
    }
    void setNama(string nama)
    {
        this->nama = nama;
    }

    string getBidang()
    {
        return this->namaBidang;
    }
    void setBidang(string bidang)
    {
        this->namaBidang = bidang;
    }

    string getPartai()
    {
        return this->namaPartai;
    }
    void setPartai(string partai)
    {
        this->namaPartai = partai;
    }
    ~DPR(){

    };
};