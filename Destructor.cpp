#include <iostream>
using namespace std;

class angka
{
private:
    int *arr;
    int panjang;

public:
    angka(int);
    ~angka();

    void cetakData();
    void isiData();
};

angka::angka(int i)
{
    panjang = 1;
    arr = new int(1);
    isiData();
}