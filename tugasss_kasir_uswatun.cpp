#include <iostream>
using namespace std;
int main(){
	string nama,pembeli;
	int harga, jumlah, total, jumtotal, jumbayar, kembalian, potongan;
	string input, kode;
	
awal:
	cout<< "    TOKO ELEKTRONIK      "<<endl;
	cout<< "=========================="<<endl;
	cout<< "Nama Pembeli  :";
	cin>>pembeli;
	cout<< "Pilihan barang yang tersedia"<<endl;
	cout<< "1 - laptop Asus RAM 4GB - RP.5000.000"<<endl;
	cout<< "2 - Mouse Wireless - RP.150.000"<<endl;
	cout<< "3 - Mikrotik - RP.600.000"<<endl;
	
	cout<<endl;
	cout<<endl;
	cout<<"Barang yang dipilih  :";
	cin>>kode;
	cout<<"Jumlah beli  :";
	cin>>jumlah;
	
	if (kode == "1"){
		cout<<"laptop Asus RAM 4GB";
		harga = 5000000;
	}
	 else if (kode == "2"){
		cout<<"Mouse Wireless";
		harga = 150000;
	}
	 else if (kode == "3"){
		cout<<"Mikrotik";
		harga = 600000;
	}else {
		cout<<"Barang yang dipilih tidak tersedia";
	}
	
	cout<<endl;
	cout<<"=============================="<<endl;
	cout<<"struk pembayaran"<<endl;
	cout<<"=============================="<<endl;
	cout<<"Nama Pembeli  :"<<pembeli<<endl;
	cout<<"Harga         :"<<harga<<endl;
	cout<<"Jumlah        :"<<jumlah<<endl;
	
	total = harga * jumlah;
	
	cout<<"Total        :"<<total<<endl;
	cout<<endl;
	
	if (total == 100000 || total < 500000){
		potongan = 0.05 * total;
	}
	 else if (total >500000){
	 	potongan = 0.10 * total;
	 } else{
	 	potongan = 0;
	 }
	 cout<<"Potongan   :"<<potongan<<endl;
	 cout<<"========================"<<endl;
	 
	 jumtotal = total-potongan;
	 
	 cout<<"Total Keseluruhan  :"<<jumtotal<<endl;
	 cout<<"Uang Bayar  ";
	 cin>>jumbayar;
	 
	 kembalian = jumbayar - jumtotal;
	 cout<<"Uang kembalian : "<<kembalian<<endl;
	 cout<<"======================="<<endl;
	 
	 cout<<"Mau Input Lagi [Y/N] : ";
	 cin>>input;
	 
	 if (input == "y" || input=="Y"){
	 	goto awal;
	 }else{
	 	return 0;
	 }
	 
	 
	
}
  
	

