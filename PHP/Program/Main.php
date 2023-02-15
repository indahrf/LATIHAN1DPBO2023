<?php
/* Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//Import file
require ('Mahasiswa.php');

//Membuat list class Mahasiswa
$arraymhs = array();

//Create Data List
$Mahasiswa1 = new Mahasiswa('Indah Resti Fauzi', '2103507', 'Ilmu Komputer', 'FPMIPA', 'images\image1.jpeg');
array_push($arraymhs, $Mahasiswa1);
$Mahasiswa2 = new Mahasiswa('Vina Luthfiana', '210211', 'Pendidikan Ilmu Komputer', 'FPMIPA', 'images\image2.jpeg');
array_push($arraymhs, $Mahasiswa2);
$Mahasiswa3 = new Mahasiswa('Vini Luthfiani', '2105729', 'Administrasi Pendidikan', 'FIP', 'images\image3.jpeg');
array_push($arraymhs, $Mahasiswa3);



//Read list sebelum di update dan delete
echo "List sebelum Update dan Delete" . '<br><br>';
echo "Daftar Nama Mahasiswa Universitas Pendidikan Indonesia 2023" . '<br>';
echo "<table border='3'>";
echo "<tr>
    <th> Nama </th>
    <th> NIM </th>
    <th> Program Studi </th>
    <th> Fakultas </th>
    <th> Foto </th>
    </tr>";
for($i = 0; $i < 3; $i++){
    echo "<tr><td>";
    echo $arraymhs[$i]->getNama();
    echo "</td><td>";
    echo $arraymhs[$i]->getNim();
    echo "</td><td>";
    echo $arraymhs[$i]->getProdi();
    echo "</td><td>";
    echo $arraymhs[$i]->getFakultas();
    echo "</td><td>";
    echo "<img src='" . $arraymhs[$i]->getFoto(). "'style='width: 200px'>";
    echo "</td>";
     echo "</tr>";
}
echo "</table>";
echo '<br><hr><br>';

//Update Data
$arraymhs[1]->setNama("Abqary Agler");
$arraymhs[1]->setProdi("Ekonomi Islam");
$arraymhs[1]->setFakultas("FPIPS");

//Read list setelah di update
echo "List setelah Update" . '<br><br>';
echo "Daftar Nama Mahasiswa Universitas Pendidikan Indonesia 2023" . '<br>';
echo "<table border='3'>";
echo "<tr>
    <th> Nama </th>
    <th> NIM </th>
    <th> Program Studi </th>
    <th> Fakultas </th>
    <th> Foto </th>
    </tr>";
for($i = 0; $i < 3; $i++){
    echo "<tr><td>";
    echo $arraymhs[$i]->getNama();
    echo "</td><td>";
    echo $arraymhs[$i]->getNim();
    echo "</td><td>";
    echo $arraymhs[$i]->getProdi();
    echo "</td><td>";
    echo $arraymhs[$i]->getFakultas();
    echo "</td><td>";
    echo "<img src='" . $arraymhs[$i]->getFoto(). "'style='width: 200px'>";
    echo "</td>";
     echo "</tr>";
}
echo "</table>";
echo '<br><hr><br>';

//Delete Data
array_splice($arraymhs, 1, 1);
//Read list setelah di delete
echo "List setelah Delete" . '<br><br>';
echo "Daftar Nama Mahasiswa Universitas Pendidikan Indonesia 2023" . '<br>';
echo "<table border='3'>";
echo "<tr>
    <th> Nama </th>
    <th> NIM </th>
    <th> Program Studi </th>
    <th> Fakultas </th>
    <th> Foto </th>
    </tr>";
for($i = 0; $i < 2; $i++){
    echo "<tr><td>";
    echo $arraymhs[$i]->getNama();
    echo "</td><td>";
    echo $arraymhs[$i]->getNim();
    echo "</td><td>";
    echo $arraymhs[$i]->getProdi();
    echo "</td><td>";
    echo $arraymhs[$i]->getFakultas();
    echo "</td><td>";
    echo "<img src='" . $arraymhs[$i]->getFoto(). "'style='width: 200px'>";
    echo "</td>";
     echo "</tr>";
}
echo "</table>";
echo '<br><hr><br>';
?>