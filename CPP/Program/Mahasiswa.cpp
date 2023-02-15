/* Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//Import Library
#include <iostream> 
#include <string>

using namespace std;

//Membuat class Mahasiswa
class Mahasiswa
{
    //Private attributes dari class mahasiswa
    private:
        string nama;
        string nim;
        string prodi;
        string fakultas;

    //Public methods dari class mahasiswa
    public:

        /*Constructors*/
        //Methods untuk set attributes dari class mahasiswa
        Mahasiswa()
        {
            //Set attributes pada class mahasiswa
            this->nama = "";
            this->nim = "";
            this->prodi = "";
            this->fakultas = "";
        }

        //Methods untuk set attributes dari class mahasiswa dengan parameter
        Mahasiswa(string nama, string nim, string prodi, string fakultas)
        {
            //Set attributes pada class mahasiswa sesuai isi parameter
            this->nama = nama;
            this->nim = nim;
            this->prodi = prodi;
            this->fakultas = fakultas;
        }

        /*Getter dan Setter*/

        //Getter dan setter untuk nama mahasiswa
        string get_nama()
        {
            return this->nama;
        }
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        //Getter dan setter untuk nim mahasiswa
        string get_nim()
        {
            return this->nim;
        }
        void set_nim(string nim)
        {
            this->nim = nim;
        }

        //Getter dan setter untuk prodi mahasiswa
        string get_prodi()
        {
            return this->prodi;
        }
        void set_prodi(string prodi)
        {
            this->prodi = prodi;
        }

        //Getter dan setter untuk fakultas mahasiswa
        string get_fakultas()
        {
            return this->fakultas;
        }
        void set_fakultas(string fakultas)
        {
            this->fakultas = fakultas;
        }

        /*Destructors*/
        ~Mahasiswa()
        {

        }
};