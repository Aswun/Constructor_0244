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

angka::~angka()
{
    cout << endl;
    cetakData();
    delete[]arr;
    cout << "alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakData()
{
    for(int i = 1; 1 <= panjang; i++)
    {
        cout << i << " = " << arr[i] << endl;
    }
}