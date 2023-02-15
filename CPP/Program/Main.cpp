/* Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin. */

//Import library dan file
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"

using namespace std;

int main()
{
    //Deklarasi linked list library
    list<Mahasiswa> llist;

    int query = 0;
    //Loop untuk menjalankan CRUD
    while(query < 5)
    {
        cout << '\n' << "DATA MAHASISWA UNIVERSITAS PENDIDIKAN INDONESIA 2023" << '\n';
        cout << "PILIH QUERY" << '\n';
        cout << "1. CREATE DATA" << '\n';
        cout << "2. READ DATA" << '\n';
        cout << "3. UPDATE DATA" << '\n';
        cout << "4. DELETE DATA" << '\n';
        cout << "5. EXIT" << '\n';

        int i;
        //Menampung pilihan user
        cin >> query;

        // Menjalankan Create Data
        if(query == 1)
        {
            int n = 0;
            int find = 0;
            string nama;
            string nim;
            string prodi;
            string fakultas;

            //Menampung jumlah data yang akan ditambahkan
            cout << "Jumlah data yang akan dimasukkan:";
            cin >> n;
            cout << "Masukkan data anda dengan urutan sebagai berikut" << '\n' << "NAMA - NIM - PROGRAM_STUDI - FAKULTAS" << '\n';
            
            //Menambahkan Data List
            for(i = 0; i < n; i++)
            {
                Mahasiswa temp;
                cin >> nama >> nim >> prodi >> fakultas;

                //Cek apakah nim tersedia
                for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
                {
                    if(nim == it->get_nim())
                    {
                        find = 1;
                    }
                }

                //Gagal tambah data
                if(find == 1)
                {
                    cout << "NIM tidak unik, data gagal ditambahkan!" << '\n';
                }
                else 
                {
                    //Set data ke list mahasiswa
                    temp.set_nama(nama);
                    temp.set_nim(nim);
                    temp.set_prodi(prodi);
                    temp.set_fakultas(fakultas);
                    llist.push_back(temp);
                    cout<< "Create data berhasil!" << '\n';
                }
            }
        }
        //Menjalankan Read Data List
        else if(query == 2)
        {
            cout<< "DAFTAR NAMA MAHASISWA UNIVERSITAS PENDIDIKAN INDONESIA 2023" << '\n';
            i = 0;
            //Menampilkan data list Mahasiswa
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                //panggil private attributs dengan get
                cout << (i+1) << ". " << it->get_nama() << '\n';
                cout << "   NIM           : " << it->get_nim() << '\n';
                cout << "   Program Studi : " << it->get_prodi() << '\n';
                cout << "   Fakultas      : " << it->get_fakultas() << '\n';
                i++;
            }
        }
        //Menjalankan Update Data
        else if(query == 3)
        {
            string ubah;
            int find = 0;
            string nama;
            string nim;
            string prodi;
            string fakultas;

            //Tampung nim yang akan diupdate
            cout<< "Masukkan NIM data yang akan di-update" << '\n';
            cin  >> ubah;

            //Update list
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                //Jika nim yg akan diupdate tersedia
                if(ubah == it->get_nim())
                {
                    cout << "Masukkan data update dengan urutan sebagai berikut" << '\n' << "NAMA - PROGRAM_STUDI - FAKULTAS" << '\n';
                    //Tampung data baru lalu set kembali list yg akan diupdate
                    cin >> nama >> prodi >> fakultas;
                    it->set_nama(nama);
                    it->set_prodi(prodi);
                    it->set_fakultas(fakultas);
                    find = 1;
                    cout<< "Update data berhasil!" << '\n';
                } 
            }
            if(find == 0)
            {
                cout<< "Gagal, data yang anda masukkan tidak ada!" << '\n';
            }
        }
        //Menjalankan Delete Data
        else if(query == 4)
        {
            string apus;
            int find = 0;
            
            //Tampung nim yang akan didelete
            cout<< "Masukkan NIM data yang akan di-delete" << '\n';
            cin  >> apus;

            //Delete List
            for(list<Mahasiswa>::iterator it = llist.begin(); it != llist.end(); it++)
            {
                //Jika nim yg akan didelete tersedia
                if(apus == it->get_nim())
                {
                    //Delete list
                    llist.erase(it);
                    find = 1;
                    it = llist.end();
                    cout<< "Delete data berhasil!" << '\n';
                } 
            }
            if(find == 0)
            {
                cout<< "Gagal, data yang anda masukkan tidak ada!" << '\n';
            }
        }
    }

    return 0;
}