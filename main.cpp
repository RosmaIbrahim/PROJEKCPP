#include <iostream>
using namespace std;
int main() {
  #include <iostream>
using namespace std;
// struct pesawat 
struct pesawat
{
    string nama_pesawat;
    string jenis;
    double harga_pesawat;
    string tanggal_pesawat;
    string kursi_pesawat;
};
  // kode booking 
int main(){
    int menu;
  int a, b;
    cout << "Loading......\n";
    cout <<"Opening the program\n";
    for (int i = 0; i <= menu; i++)
    {   
    cout << "Silakan piih menu di bawah ini" << endl;
    cout << "1. Lihat Tiket\n"; 
    cout << "2. Pesanan saya\n";
    cout << "3. Check in\n";
    cin >> menu;
    if (menu==1){
        cout << "Lihat tiket\n";
       ofstream myFile;
      cin >> a; 
      cin >> b;
      myFile.open("pesananan.txt");
      myFile <<"Nama Pesawat"<< a << endl;
      myFile << "Kode Booking " << b; 
        cin >> menu;
        if (menu==1){
            cout << "Filter berdasarkan harga termahal\n";
           
        } else if (menu==2)
        {
            cout << "Filter berdasarkan harga termurah\n";
        } else{
            break;
        }
        
    }
    }
   pesawat Lion;
   Lion.jenis="Lion air";
   cout << Lion.jenis<< endl;
    

    cout << "Terimakasih";
}
return 0;
}
