from DPR import DPR
from tabulate import tabulate

# instantiation

print("SELAMAT DATA DI MESIN")
n = int(input("Masukan berapa banyak data awal:"))

# vars
cariID = 0
stop = 0
pUpdate = 0
# list for all the object
datas = []

kori = DPR(2, "kori", "bidang", "pdip")
print(kori.getName())

for i in range(n):
    id = i + 1
    nama = str(input("Nama: "))
    bidang = str(input("Bidang: "))
    partai = str(input("Partai: "))
    temp = DPR(id, nama, bidang, partai)
    datas.append(temp)


pilihan = -1
while pilihan != 5:
    print("===============\n")
    print("MENU PILIHAN")
    print("1. Tambah data")
    print("2. Ubah data")
    print("3. Hapus data")
    print("4. Tampil data")
    print("5. Keluar\n")

    pilihan = int(input("Masukan pilihan: "))

    if pilihan == 1:
        print("Masukan data baru")
        id = i + 1
        nama = str(input("Nama: "))
        bidang = str(input("Bidang: "))
        partai = str(input("Partai: "))

        datas.append(DPR(id, nama, bidang, partai))

    elif pilihan == 2:
        cariID = int(input("Masukan ID yang ingin di ubah: "))
        for data in datas:
            if data.getID() == cariID:
                print("apa yang mau di ubah")
                print("a.nama")
                print("b.bidang")
                print("c.partai")
                pUpdate = input("Masukan : ")[0]

                if pUpdate == "a":
                    nama = input("Masukan nama baru : ")
                    data.setName(nama)
                elif pUpdate == "b":
                    bidang = input("Masukan bidang baru : ")
                    data.setBidang(bidang)
                elif pUpdate == "c":
                    partai = input("Masukan partai baru : ")
                    data.setPartai(partai)
            else:
                print("Gaada ID itu")
    elif pilihan == 3:
        cariID = int(input("Masukan ID data yang ingin di hapus : "))
        for data in datas:
            if data.getID() == cariID:
                datas.remove(data)
    elif pilihan == 4:
        # tampilin table
        table_data = [["ID", "Nama", "Bidang", "Partai"]]
        for dpr in datas:
            table_data.append(
                [dpr.getID(), dpr.getName(), dpr.getBidang(), dpr.getPartai()]
            )

        print(tabulate(table_data, headers="firstrow", tablefmt="grid"))

    elif pilihan == 5:
        print("Keluar dari mesin...")
