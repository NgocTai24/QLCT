#include <iostream>
using namespace std;
#include "khoanchi.h"
KhoanChi a[1000];
int N;
#include "mylib.h"
int main()
{
    LoadData(a, N, "chitieu.dat");
    int chon;
    do{
        chon = Menu();
        switch (chon){
        case 1:
            NhapKhoanChi(a, N);
            break;
        case 2:
            InKhoanChi(a, N);
            break;
        case 3: 
            cout<<"Cam on ban da su dung chuong trinh\n";
            break;
        }
    } while(chon != 3);
    SaveData(a, N, "chitieu.dat");
    return 0;
} // namespace std;
