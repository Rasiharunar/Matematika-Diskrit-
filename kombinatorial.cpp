/**
******************************************************************************
* @file	kombinatorial
* @author 	rasiharunar
* @version 1.0
* @date 23 December 2022
* @brief
******************************************************************************
*/


#include <iostream>
#include <string>

using namespace std;

int factorial(int n){
    long factorial =1.0;
    for(int a=1; a<=n; a++){
        factorial*=a;
    }    
    return factorial;
}

int kombinatorial(int mahasiswa, int mahasiswi, int n, int nLaki, int nP){
    int factMahasiswa = factorial(mahasiswa);
    int factMahasiswi = factorial(mahasiswi);

    int Rl = factorial(mahasiswa-nLaki);
    int factNLaki = factorial(nLaki);

    int Rp = factorial(mahasiswi-nP);
    int factnP = factorial(nP);
    
    int kombi =(factMahasiswa/(Rl*factNLaki))*(factMahasiswi/(Rp*factnP));
    
    cout << "Jumlah Mahasiswa = "<<mahasiswa<<endl;
    cout << "Jumlah Mahasiswi = "<<mahasiswi<<endl;

    cout << "Jumlah Anggota kelompok = "<<n<<endl;
    cout << "Minimal Anggota Laki-Laki = "<<nLaki<<endl;
   
    cout << "kemungkinan kombinasinya adalah : "<<kombi<<endl;

    return kombi;
}

void totalCara (int nCara, int* arr, int len){
    for(int b = 0; b<len;b++){
        nCara += arr[b];
    } 
    cout<<"Total Semua kemungkinan Cara adalah : "<<nCara<<endl;
}

void ruleOfSum(int nLaki, int nAnggota, int nP, int cara, int mahasiswa, int mahasiswi, int *arr){
    for(int a = nLaki; a<=nAnggota; a++){
        nP = nAnggota - a;
        cara = kombinatorial(mahasiswa, mahasiswi,nAnggota, a, nP);
        arr[a-nLaki] = cara;   
    }
}
int main(){
    int mahasiswa = 10;
    int mahasiswi = 10;
    int nAnggota, nLaki, nP;
    int arrLen, cara, nCara;


    cout<<"Jumlah Mahasiswa : ";
    cin>>mahasiswa;
    cout<<"Jumlah Mahasiswi : ";
    cin>>mahasiswi;

    cout<<"Jumlah Anggota : ";
    cin>>nAnggota;

    cout<<"Jumlah minimal Anggota Laki laki : ";
    cin >>nLaki;

    arrLen =nAnggota-(nLaki-1) ;
    int arr[arrLen];
    
    ruleOfSum(nLaki, nAnggota, nP, cara, mahasiswa, mahasiswi, arr);
    totalCara(nCara, arr, arrLen);
    
}