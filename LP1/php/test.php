<?php

require('mahasiswa.php');

// add data 
$mahasiswa[0] = new mahasiswa("Bintang", "2102665", "ilkom", "FPMIPA", "test.jpg");
$mahasiswa[1] = new mahasiswa("fajar", "2100000", "ilkom", "FPMIPA", "test2.jpg");

foreach ($mahasiswa as $a) {
    echo
    "<img src='" . $a->getFoto() . "'style='width:200px'>" . "<br/>";
    echo "Nama        : " . $a->getNama() . "<br>";
    echo "NIM         : " . $a->getNim() . "<br>";
    echo "Prodi       : " . $a->getProdi() . "<br>";
    echo "Fakultas    : " . $a->getFakultas() . "<br>";
    echo "<br>";
}
//edit data 
$mahasiswa[0] = new mahasiswa("Asyqari", "21", "ilkom", "FPMIPA", "test.jpg");
echo "Data setelah dirubah";
echo "<br>";
foreach ($mahasiswa as $a) {
    echo
    "<img src='" . $a->getFoto() . "'style='width:200px'>" . "<br/>";
    echo "Nama        : " . $a->getNama() . "<br>";
    echo "NIM         : " . $a->getNim() . "<br>";
    echo "Prodi       : " . $a->getProdi() . "<br>";
    echo "Fakultas    : " . $a->getFakultas() . "<br>";
    echo "<br>";
}
//hapus data
array_splice($mahasiswa, 1, 1);

echo "Data setelah dihapus";
echo "<br>";
foreach ($mahasiswa as $a) {
    echo
    "<img src='" . $a->getFoto() . "'style='width:200px'>" . "<br/>";
    echo "Nama        : " . $a->getNama() . "<br>";
    echo "NIM         : " . $a->getNim() . "<br>";
    echo "Prodi       : " . $a->getProdi() . "<br>";
    echo "Fakultas    : " . $a->getFakultas() . "<br>";
    echo "<br>";
}
