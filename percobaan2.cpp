#include <iostream>
#include <string>
#include <stdio.h>
#include <conio.h>

using namespace std;
int main ()
{
char nama [30], nim[10];
float nilai1, nilai2, nilai3, nilai4, nilai5, nilai6, nilai7, nilai8, nilai9, nilai10, totalnilai1;
int sikap;
string sukasuka;
	

cout<<".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-."<<endl;
cout<<"//                                             //"<<endl;
cout<<"//\t PROGRAM MENGHITUNG NILAI AKHIR        //"<<endl;
cout<<"//                                             //"<<endl;
cout<<"........................."<<endl;
cout<<endl;
cout<<"Nama   : ";
gets(nama);
cout<<"No.Absen    : ";
cin>>nim;

cout<<"Sikap [A][B][C][D][E]: ";
cin>>sukasuka;

if (sukasuka == "A" ){
	sikap=100;
}
 else if (sukasuka == "B" ){
	sikap=80;
 }
 else if (sukasuka == "C" ){
	sikap=60;
 }
 
 else if (sukasuka == "D" ){
	sikap=40;
 }
 
 else if(sukasuka == "E" ){
	sikap=20;
 } else {
 	
 }
 
cout<<endl;
cout<<"Masukkan Nilai AGAMA : "; cin>>nilai1;
cout<<"Masukkan Nilai MATEMATIKA   : "; cin>>nilai2;
cout<<"Masukkan Nilai B.INDONESIA : "; cin>>nilai3;
cout<<"Masukkan Nilai B.INGGRIS : "; cin>>nilai4;
cout<<"Masukkan Nilai FISIKA : "; cin>>nilai5;
cout<<"Masukkan Nilai KIMIA : "; cin>>nilai6;
cout<<"Masukkan Nilai BIOLOGI : "; cin>>nilai7;
cout<<"Masukkan Nilai EKONOMI : "; cin>>nilai8;
cout<<"Masukkan Nilai SEJARAH : "; cin>>nilai9;
cout<<"Masukkan Nilai AKUNTANSI : "; cin>>nilai10;


totalnilai1=(nilai1+nilai2+nilai3+nilai4+nilai5+nilai6+nilai7+nilai8+nilai9+nilai10)/10;

cout<<"--------------------------------"<<endl;
if    (totalnilai1 >=85 && totalnilai1 <=1000)
    cout<<"// Grade Yang Anda Peroleh: A //"<<endl;

    else if (totalnilai1 >=75 && totalnilai1 <=840)

    cout<<"// Grade Yang Anda Peroleh: B //"<<endl;

    else if (totalnilai1 >=65 && totalnilai1 <=750)

    cout<<"// Grade Yang Anda Peroleh: C //"<<endl;

    else if (totalnilai1 >=40 && totalnilai1 <=650)

    cout<<"// Grade Yang Anda Peroleh: D //"<<endl;

    else if (totalnilai1 >=0 && totalnilai1 <=400)

    cout<<"// Grade Yang Anda Peroleh: E //"<<endl;
    cout<<"--------------------------------"<<endl;


cout<<endl;
cout<<endl;
cout<<"-------------------------------------------"<<endl;
cout<<"Siswa Atas Nama : "<<nama<<endl;
cout<<"No.Absen	: "<<nim<<endl;
cout<<"Memperoleh Total Nilai : "<<totalnilai1<<endl;
cout<<"Selama perjuangannya "<<endl;
cout<<"-------------------------------------------"<<endl;
getch ();
}
