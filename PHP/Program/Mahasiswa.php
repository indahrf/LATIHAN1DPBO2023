<?php
/* Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//Membuat class Mahasiswa
class Mahasiswa{
    //Private attributes dari class mahasiswa
    private $nama = '';
    private $nim = '';
    private $prodi = '';
    private $fakultas = '';
    private $foto = '';

    //Public methods dari class mahasiswa
    /*Constructors*/
    //Methods untuk set attributes dari class mahasiswa dengan parameter
    public function __construct($nama = '', $nim = '', $prodi = '', $fakultas = '', $foto = '')
    {
        //Set attributes pada class mahasiswa sesuai isi parameter
        $this->nama = $nama;
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
        $this->foto = $foto;
    }

    /*Getter dan Setter*/

    //Getter dan setter untuk nama mahasiswa
    public function setNama($nama){
        $this->nama = $nama;
    }
    public function getNama(){
        return $this->nama;
    }

    //Getter dan setter untuk nim mahasiswa
    public function setNim($nim){
        $this->nim = $nim;
    }
    public function getNim(){
        return $this->nim;
    }

    //Getter dan setter untuk prodi mahasiswa
    public function setProdi($prodi){
        $this->prodi = $prodi;
    }
    public function getProdi(){
        return $this->prodi;
    }

    //Getter dan setter untuk fakultas mahasiswa
    public function setFakultas($fakultas){
        $this->fakultas = $fakultas;
    }
    public function getFakultas(){
        return $this->fakultas;
    }

    //Getter dan setter untuk foto mahasiswa
    public function setFoto($foto){
        $this->foto = $foto;
    }
    public function getFoto(){
        return $this->foto;
    }
}

?>
