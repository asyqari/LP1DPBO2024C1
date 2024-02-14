<?php


class DPR
{
    private $id = -1;
    private $nama = "";
    private $bidang = "";
    private $partai = "";
    private $foto = "";

    public function __construct($id, $nama, $bidang, $partai, $foto)
    {
        $this->id - $id;
        $this->nama = $nama;
        $this->bidang = $bidang;
        $this->partai = $partai;
        $this->foto = $foto;
    }


    // setter getter
    // id
    public function getID(): int
    {
        return $this->id;
    }
    public function setID($id)
    {
        $this->id = $id;
    }
    // nama
    public function getNama(): string
    {
        return $this->nama;
    }
    public function setNama($nama)
    {
        $this->nama = $nama;
    }
    // bidang
    public function getBidang(): string
    {
        return $this->bidang;
    }
    public function setBidang($bidang)
    {
        $this->bidang = $bidang;
    }
    // partai
    public function getPartai(): string
    {
        return $this->partai;
    }
    public function setPartai($partai)
    {
        $this->partai = $partai;
    }
    // foto
    public function getImg(): string
    {
        return $this->foto;
    }

    public function setImg($foto)
    {
        $this->foto = $foto;
    }
}
