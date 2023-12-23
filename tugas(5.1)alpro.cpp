#include <iostream>
using namespace std;
void garis(){
    for (int i = 1; i <= 42; i++)
    {cout << "=";}
    cout << "\n";
}
void judul(string judul){
    garis();
    cout << judul << "\n";
    garis();
}
void menuOpsi(){
    cout << "|1.Bilangan Genap dan jumlahnya          |"<<"\n";
    cout << "|2.Bilangan Ganjil dan jumlahnya         |"<<"\n";
    cout << "|3.Bilangan Prima dan jumlahnya          |"<<"\n";
    garis();

}
void genap(int batas, int &sumGenap){
    cout << "Bilangan Genap antara 1 sampai " << batas << " adalah : ";
    for (int i = 1; i <= batas; i++)
       {
        if (i%2 == 0)
        {cout << i;
         sumGenap += i;
        }
       else
        {
           cout << " ";
        }
       }
}
void ganjil (int batas,int &sumGanjil){
    cout << "Bilangan Ganjil antara 1 sampai "<< batas << " adalah:";
    for (int i=1; i<=batas ; i++)
        {
            if (i%2 != 0)
            {
                cout << i;
                sumGanjil += i;
            }
            else
            {
                cout << " ";
            }
        }
}
void prima(int batas, int &sumPrima){
    cout << "Bilangan Prima antara 1 sampai " << batas << " adalah:";
       for (int i = 2; i <= batas; i++) {
        bool Prima = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                Prima = false;
                break;
            }
        }
        if (Prima) {
            cout << i << " ";
            sumPrima += i;
        }
    }
}
void faktorGenap (int sumGenap){
    cout << "Faktor dari Jumlah Bilangan Genap : ";
    for(int i = 1; i <= sumGenap; ++i)
        {
        if(sumGenap % i == 0)
            cout << i << " ";
        }
}
void faktorGanjil(int sumGanjil){
    cout << "Faktor dari jumlah bilangan ganjil tersebut adalah : ";
    for(int y = 1; y <= sumGanjil; ++y) {
        if(sumGanjil % y == 0)
            cout << y << " ";
    }
}
void faktorPrima(int sumPrima){
    cout << "Faktor dari Jumlah Bilangan Prima:";
        for(int z = 1; z <= sumPrima; ++z) {
        if(sumPrima % z == 0)
            cout << z << " ";
    }
}
int main (){
    int pil,batas,sumGenap = 0, sumGanjil = 0, sumPrima = 0;
    char yn;
    do {
    judul("Program Bilangan Genap,Ganjil,Prima");
    MenuOpsi();
    cout << "Masukkan pilihan anda : ";
    cin >> pil;
    cout << "\n";
    switch (pil){
    case 1 :
       judul("Bilangan Genap");
       cout << "Masukkan batas bilangan : ";
       cin >> batas;
       genap(batas, sumGenap);
       cout << "\n";
       cout << "Jumlah Bilangan Genap : " <<sumGenap << "\n";
       faktorGenap(sumGenap);
    break;
    case 2:
        judul("Bilangan Ganjil");
        cout << "Masukkan batas bilangan : ";
        cin >> batas;
        ganjil (batas, sumGanjil);
        cout << "\n";
        cout << "Jumlah bilangan Ganjil : " <<sumGanjil<< "\n";
        faktorGanjil(sumGanjil);
    break;
    case 3:
        judul("Bilangan Prima");
        cout << "Masukkan batas bilangan : ";
        cin >> batas;
        prima (batas, sumPrima);
        cout << "\n";
	    cout << "Jumlah Bilangan Prima : "<< sumPrima << "\n";
        faktorPrima(sumPrima);
    break;
    default:
    cout<< "Pilihan yang anda masukkan tidak tersedia" << endl;
    break;
    }
    cout << "\n\n";
    cout << "Apakah anda ingin memilih lagi?(Y/N):";
    cin >> yn;
}
while (yn == 'y' || yn == 'Y');
cout << "\n" << "Program Selesai.Terimakasih!";
return 0;
}