#include<iostream>
#include<conio.h>
using namespace std;

/*deklarasi prosedur yang digunakan*/
void HitungDapatnyaBunga();

int main()
{
    cout<<"=== PROGRAM MENGHITUNG DAPATNYA BUNGA ===\n";
    /*deklarasi*/
    int i, N;
    /*PROGRAM UTAMA*/
    cout<<"berapa nasabah yang dihitung?: ";
    cin>>N;
    for (i=1; i<=N; i++)
        HitungDapatnyaBunga();
    
    return 0;
}
void HitungDapatnyaBunga()
/*menghitung dapatnya bunga*/

{
    /*deklarasi*/
    float waktu, bunga, modal, dapatnya, total;
    /*Algoritma*/
  
    cout<<"bunga (%): ";
    cin>>bunga;
    cout<<"modal (Rp): ";
    cin>>modal;  
    cout<<"waktu (bulan)?: ";
    cin>>waktu;
    dapatnya = (bunga / 100) * modal * waktu;
    total = modal + dapatnya;
    cout<<"dapatnya bunga: "<<dapatnya<<endl;
    cout<<"total: "<<total<<endl;
    getch();
    
}