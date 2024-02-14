<?php
require('DPR.php');


$DPR[0] = new DPR(1, "Asyqari", "Wakil", "PDIP", "foto1.jpg");
$DPR[1] = new DPR(2, "Ama", "Ketua", "Gerindra", "foto2.jpg");

foreach ($DPR as $data) {
    echo "<img src='" . $data->getImg() . "'style='width:400xpx'>" . "<br/>";
    echo "Nama  : " . $data->getNama() . "<br>";
    echo "Bidang  : " . $data->getBidang() . "<br>";
    echo "Partai  : " . $data->getPartai() . "<br>";
}


$DPR[0] = new DPR(1, "Asyqari Hebat", "Raja Land Of Dawn", "Konoha", "foto1.jpg");
echo "Hasil Edit" . "<br>";

foreach ($DPR as $data) {
    echo "<img src='" . $data->getImg() . "'style='width:400xpx'>" . "<br/>";
    echo "Nama      : " . $data->getNama() . "<br>";
    echo "Bidang    : " . $data->getBidang() . "<br>";
    echo "Partai    : " . $data->getPartai() . "<br>";
}

array_splice($DPR, 1, 1);
echo "Data setelah dihapus" . "<br>";

foreach ($DPR as $data) {
    echo "<img src='" . $data->getImg() . "'style='width:400xpx'>" . "<br/>";
    echo "Nama      : " . $data->getNama() . "<br>";
    echo "Bidang    : " . $data->getBidang() . "<br>";
    echo "Partai    : " . $data->getPartai() . "<br>";
}
