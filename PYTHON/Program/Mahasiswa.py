# Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 1 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Membuat class Mahasiswa
class Mahasiswa:
    
    # Attributes dari class mahasiswa
    __nama = ""
    __nim = ""
    __prodi = ""
    __fakultas = ""
    
    # Constructors
    # methods dari class mahasiswa
    def __init__(self, nama = "", nim ="", prodi = "", fakultas = ""):
        # Set attributes pada class mahasiswa
        self.__nama = nama
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas


    # Getter dan Setter

    # Getter dan setter untuk nama mahasiswa
    def get_nama(self):
        return self.__nama
    def set_nama(self, nama):
        self.__nama = nama
        
    # Getter dan setter untuk nim mahasiswa
    def get_nim(self):
        return self.__nim
    def set_nim(self, nim):
        self.__nim = nim
        
    # Getter dan setter untuk prodi mahasiswa
    def get_prodi(self):
        return self.__prodi
    def set_prodi(self, prodi):
        self.__prodi = prodi
        
    # Getter dan setter untuk fakultas mahasiswa
    def get_fakultas(self):
        return self.__fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas