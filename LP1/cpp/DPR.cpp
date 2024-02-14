#include <iostream>
#include <string>

// using std namespace
using namespace std;

class DPR
{
private:
    int dataID;
    string nama;
    string namaBidang;
    string namaPartai;

public:
    DPR()
    {
        this->dataID = -1;
        this->nama = "";
        this->namaBidang = "";
        this->namaPartai = "";
    }

    DPR(int dataID, string nama, string namaBidang, string namaPartai)
    {
        this->dataID = dataID;
        this->nama = nama;
        this->namaBidang = namaBidang;
        this->namaPartai = namaPartai;
    }

    // method create update, delete

    // getter setter
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