
import java.util.Scanner;

import java.util.ArrayList;

public class Main {

    /**
     * @param args
     */
    public static void main(String[] args) {
        int stop = 0;
        char pUpdate;
        int n, i;
        Scanner sc = new Scanner(System.in);
        ArrayList<DPR> llist = new ArrayList<>();

        int cariId;
        int ID = 0;
        String nama, bidang, partai;

        n = sc.nextInt();
        for (int j = 0; j < n; j++) {
            ID++;
            DPR temp = new DPR();

            System.out.println("Masukan Nama\n");
            nama = sc.next();
            System.out.println("Masukan Bidang\n");
            bidang = sc.next();
            System.out.println("Masukan Partai\n");
            partai = sc.next();

            temp.setID(ID);
            temp.setName(nama);
            temp.setBidang(bidang);
            temp.setPartai(partai);

            llist.add(temp);
        }

        // menu
        int pilihan = 0;
        do {
            System.out.println("\n MENU\n");
            System.out.println("1.Tambah data\n");
            System.out.println("2.Ubah data\n");
            System.out.println("3.Hapus data\n");
            System.out.println("4.Tampil data\n");
            System.out.println("5.Keluar\n");

            pilihan = sc.nextInt();
            switch (pilihan) {
                case 1:
                    DPR temp = new DPR();
                    System.out.println("Masukan Nama\n");
                    nama = sc.next();
                    System.out.println("Masukan Bidang\n");
                    bidang = sc.next();
                    System.out.println("Masukan Partai\n");
                    partai = sc.next();

                    temp.setName(nama);
                    temp.setBidang(bidang);
                    temp.setPartai(partai);

                    llist.add(temp);
                    break;
                case 2:
                    System.out.println("ID yang mau diupdate: ");
                    cariId = sc.nextInt();
                    i = 0;
                    stop = 0;
                    while (i < llist.size() && stop != 1) {
                        if (llist.get(i).getID() == cariId) {
                            System.out.println("apa yang mau diubah\n");
                            System.out.println("a. nama\n");
                            System.out.println("b. bidang\n");
                            System.out.println("c. partai\n");
                            pUpdate = sc.next().charAt(0);
                            switch (pUpdate) {

                                case 'a':
                                    nama = sc.next();
                                    llist.get(i).setName(nama);
                                    break;
                                case 'b':
                                    bidang = sc.next();
                                    llist.get(i).setBidang(bidang);
                                    break;
                                case 'c':
                                    partai = sc.next();
                                    llist.get(i).setPartai(partai);
                                    break;
                                default:
                                    break;
                            }
                            stop = 1;
                        } else {
                            i++;
                        }
                    }
                    break;
                case 3:
                    System.out.println("ID yang mau dihapus: ");
                    cariId = sc.nextInt();
                    stop = 0;
                    i = 0;
                    while (i < llist.size() && stop != 1) {
                        if (llist.get(i).getID() == cariId) {

                            llist.remove(i);
                            System.out.println("Hapus Berhasil\n");
                            stop = 1;
                        } else {
                            i++;
                        }
                    }
                    break;
                case 4:
                    System.out.println("===========================\n");
                    System.out.println("| ID |    NAMA    |    BIDANG    |    PARTAI    |");
                    for (int j = 0; j < llist.size(); j++) {
                        System.out.println(Integer.toString(j + 1) + "." + llist.get(j).getName() + " | "
                                + llist.get(j).getBidang() + " | " + llist.get(j).getPartai() + " |\n");
                    }
                    break;
                case 5:
                    System.out.println("Keluar dari mesin...\n");
                    break;
                default:
                    break;
            }
        } while (pilihan != 5);

    }
}
