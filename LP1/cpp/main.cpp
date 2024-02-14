#include "DPR.cpp"
#include <list>

using namespace std;

int main()
{
    int stop = 0;
    char pUpdate;
    cout << "Berapa banyak data : ";
    int n, i;
    cin >> n;
    int ID = 1;
    int cariID;
    string nama, bidang, partai;

    list<DPR> llist;
    list<DPR>::iterator count = llist.begin();

    // create
    DPR temp;
    for (i = 0; i < n; i++)
    {
        cout << "Nama : ";
        cin >> nama;
        cout << "Nama Bidang : ";
        cin >> bidang;
        cout << "Nama Partai : ";
        cin >> partai;

        temp.setID(ID);
        ID++;
        temp.setNama(nama);
        temp.setBidang(bidang);
        temp.setPartai(partai);

        llist.push_back(temp);
    }

    // menu
    int pilihan = 0;
    do
    {
        cout << "MENU" << '\n'
             << "========" << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Ubah data" << endl;
        cout << "3. Hapus data" << endl;
        cout << "4. Tampil data" << endl;
        cout << "5. Keluar" << endl;

        cin >> pilihan;
        switch (pilihan)
        {
        case 1:

            cout << "Masukan nama: " << endl;
            cin >> nama;
            cout << "Masukan bidang: " << endl;
            cin >> bidang;
            cout << "Masukan partai: " << endl;
            cin >> partai;

            temp.setID(ID);
            ID++;
            temp.setNama(nama);

            temp.setBidang(bidang);
            temp.setPartai(partai);
            llist.push_back(temp);
            cout << "Berhasil memasukan data baru!";
            break;
        case 2:
            // update

            cout << "ID yang mau diupdate: ";
            cin >> cariID;
            stop = 0;
            count = llist.begin();
            while (count != llist.end() && stop != 1)
            {
                if (count->getID() == cariID)
                {
                    cout << "apa yang mau di ubah: "
                         << '\n';
                    cout << "a. nama" << endl;
                    cout << "b. bidang" << endl;
                    cout << "c. partai" << endl;
                    cin >> pUpdate;
                    switch (pUpdate)
                    {
                    case 'a':
                        cout << "Masukan nama baru: ";
                        cin >> nama;
                        count->setNama(nama);
                        cout << "Update nama berhasil!" << endl;
                        break;
                    case 'b':
                        cout << "Masukan bidang baru: ";
                        cin >> bidang;
                        count->setBidang(bidang);
                        cout << "Update bidang berhasil!" << endl;
                        break;
                    case 'c':
                        cout << "Masukan partai baru: ";
                        cin >> partai;
                        count->setPartai(partai);
                        cout << "Update partai berhasil!" << endl;
                        break;
                    default:
                        break;
                    }
                    stop = 1;
                }
                else
                {
                    count++;
                }
            }

            break;

        case 3:
            // Delete
            cout << "Masukan id yang ingin di hapus : ";
            cin >> cariID;
            stop = 0;
            count = llist.begin();
            while (count != llist.end() && stop != 1)
            {
                if (count
                        ->getID() == cariID)
                {
                    llist.erase(count);
                    cout << "HAPUS BERHASIL\n";
                    stop = 1;
                }
                else
                {
                    count++;
                }
            }

            break;
        case 4:
            cout << "===========================\n";
            cout << "| ID |    NAMA    |    BIDANG    |    PARTAI    |";
            cout << endl;
            i = 0;
            for (list<DPR>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                cout << (i + 1) << "." << it->getID()
                     << " | " << it->getNama() << " | " << it->getBidang() << " | " << it->getPartai() << '\n';
                i++;
            }
            break;
        case 5:
            cout << "Keluar mesin.." << endl;
            break;
        }

    } while (pilihan != 5);

    // delete
    return 0;
}