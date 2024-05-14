#include <iostream>
#include <string>
using namespace std;

class mahasiswa
{
private:
    static int nim;

public:
    int nim;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim)
    {
        nim = pNim;
    }
    static int getNim()
    {
        return nim;
    }

    mahasiswa(string pnama)
    {
        nama = pnama;
        setID();
    }
};
