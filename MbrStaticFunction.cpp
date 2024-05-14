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
};