
public class DPR {
    private int dataID;
    private String nama;
    private String bidang;
    private String partai;

    public DPR() {
        this.dataID = -1;
        this.nama = "";
        this.bidang = "";
        this.partai = "";
    }

    public DPR(int id, String nama, String bidang, String partai) {
        this.dataID = id;
        this.nama = nama;
        this.bidang = bidang;
        this.partai = partai;

    }

    // method setter getter
    public int getID() {
        return this.dataID;
    }

    public void setID(int ID) {
        this.dataID = ID;
    }

    public String getName() {
        return this.nama;
    }

    public void setName(String name) {
        this.nama = name;
    }

    public String getBidang() {
        return this.bidang;
    }

    public void setBidang(String bidang) {
        this.bidang = bidang;
    }

    public String getPartai() {
        return this.partai;
    }

    public void setPartai(String partai) {
        this.partai = partai;
    }

}
