#define _CRT_SECURE_NO_WARNINGS
#include"stdio.h"
#include"string.h"


struct date
{
    int ngay;
    int thang;
    int nam;
};
struct SinhVien
{
    int MSSV;
    char hoten[30];
    char gioiTinh[5];
    date ngaysinh;
    char malop[20];
};
typedef SinhVien SV;

void NhapSV(SV& sv)
{
    printf("nhap MSSV: ");
    scanf("%d", sv.MSSV);
    printf("nhap hoten: ");
    scanf("%d", sv.hoten);
    printf("nhap gioi tinh: ");
    scanf("%d", sv.gioitinh);
    printf("nhap ngay sinh: ");
    scanf("%d%d%d", sv.ngaysinh.ngay,sv.ngaysinh.thang,sv.ngaysinh.nam);
    printf("nhap ma lop: ");
    scanf("%d", sv.malop);
}


void inSV(SV sv)
{
    printf("&D\t%s\t%s\t%d/%d/%d\t%s",sv.MSSV,sv.hoten,sv.gioiTinh,sv.ngaysinh.ngay,sv.ngaysinh.thang,sv.ngaysinh.nam,sv.malop)
}
int main()
{
    SV sv1;
    NhapSV(sv1);
    inSV(sv1);
}
