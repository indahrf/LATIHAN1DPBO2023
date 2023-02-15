/* Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

 
//Membuat class Mahasiswa
public class Mahasiswa
{
    //Private attributes dari class mahasiswa
    private String nama;
    private String nim;
    private String prodi;
    private String fakultas;

    /*Constructors*/
    /*Getter dan Setter*/

    //Getter dan setter untuk nama mahasiswa
    public String getnama()
    {
        return this.nama;
    }
    public void setnama(String nama)
    {
        this.nama = nama;
    }

    //Getter dan setter untuk nim mahasiswa
    public String getnim()
    {
        return this.nim;
    }
    public void setnim(String nim)
    {
        this.nim = nim;
    }

    //Getter dan setter untuk prodi mahasiswa
    public String getprodi()
    {
        return this.prodi;
    }
    public void setprodi(String prodi)
    {
        this.prodi = prodi;
    }

    //Getter dan setter untuk fakultas mahasiswa
    public String getfakultas()
    {
        return this.fakultas;
    }
    public void setfakultas(String fakultas)
    {
        this.fakultas = fakultas;
    }

}