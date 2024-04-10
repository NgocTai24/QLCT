#include <iostream>
#include <fstream>
using namespace std;
#include "khoanchi.h"

void SaveData(KhoanChi a[], int N, const char * fileName){
    ofstream fout(fileName);
    fout<<N<<endl;
    for(int i = 0; i<N; i++){
        fout<<a[i].day<<endl;
        fout<<a[i].month<<endl;
        fout<<a[i].year<<endl;
        fout<<a[i].ten_khoan_chi<<endl;
        fout<<a[i].so_tien<<endl;
    }
    fout.close();
}

void NhapKhoanChi(KhoanChi a[], int &N){
    cout<<"Nhap ngay: ";
    cin>>a[N].day;
    cout<<"Nhap thang: ";
    cin>>a[N].month;
    cout<<"Nhap nam: ";
    cin>>a[N].year;
    cout<<"Nhap ten khoan chi: ";
    cin.ignore();
    getline(cin, a[N].ten_khoan_chi);

    cout<<"Nhap so tien: ";
    cin>>a[N].so_tien;
    N++;

}

void InKhoanChi(KhoanChi a[], int N){
    int sum = 0;
    for(int i = 0; i<N; i++)
    {
        cout<<a[i].day<<"-"<<a[i].month<<"-"<<a[i].year<<"\t"<<a[i].ten_khoan_chi<<"\t"<<a[i].so_tien<<endl;
        sum += a[i].so_tien;
    }
    cout<<"Tong tien da tieu la: "<<sum<<endl;
}
int Menu(){
    cout<<"CHUONG TRINH QUAN LY CHI TIEU\n";
    cout<<"1. Nhap Khoan Chi\n";
    cout<<"2. In\n";
    cout<<"3. Thoat\n";
    int c;
    cout<<"Nhap 1 chuc nang: ";
    cin>>c;
    return c;
}

void LoadData(KhoanChi a[], int &N, const char * fileName){
    ifstream fin(fileName);    
    fin>>N;
    for(int i = 0; i<N; i++){
        int d, m, y, money;
        string tenkc;
        fin>>d>>m>>y;
        string t;
        getline(fin, t);
        getline(fin, tenkc);
        fin>>money;
        a[i].day = d;
        a[i].month = m;
        a[i].year = y;
        a[i].so_tien = money;
        a[i].ten_khoan_chi = tenkc;
    }
    fin.close();
}