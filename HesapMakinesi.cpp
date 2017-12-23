#include <iostream>
using namespace std;

	// IKI SAYI ARASINDA ISLEM YAPABILEN HESAP MAKINESI

class HesapMak{
	public:
		float sayi1, sayi2, sonuc;
		int secim;
		bool x=true;
		void VeriGir(){
			cout << "Birinci sayiyi giriniz: ";
			cin >> sayi1;
			cout << "Ikinci sayiyi giriniz: ";
			cin >> sayi2;
		}
		void IslemSecimi(){
			cout << "1 - TOPLA\n"
				 << "2 - CIKAR\n"
				 << "3 - CARP\n"
				 << "4 - BOL\n\nLutfen yapacaginiz islemi seciniz: ";
			cin >> secim;
		}
		void Topla(){
			sonuc=sayi1+sayi2;
		}
		void Cikar(){
			sonuc=sayi1-sayi2;
		}
		void Carp(){
			sonuc=sayi1*sayi2;
		}
		void Bol(){
			if (sayi2==0){
				cout << "Bir sayi 0 a bolunemez!";
				x=false;
				return;
			}
			sonuc=sayi1/sayi2;
		}
};

int main(){
	HesapMak hesap;
	cout << "\t\t\tIki sayi ile islem yapabilen hesap makinesi\n\n\n";
	hesap.VeriGir();
	cout << "\n\n\n";
	A10:;
	hesap.IslemSecimi();
	switch(hesap.secim){
		case 1:
			hesap.Topla();
			cout << hesap.sayi1 << " + " << hesap.sayi2 << " = " << hesap.sonuc << endl;
			break;
		case 2:
			hesap.Cikar();
			cout << hesap.sayi1 << " - " << hesap.sayi2 << " = " << hesap.sonuc << endl;
			break;
		case 3:
			hesap.Carp();
			cout << hesap.sayi1 << " * " << hesap.sayi2 << " = " << hesap.sonuc << endl;
			break;
		case 4:
			hesap.Bol();
			if (hesap.x==false)	break;
			cout << hesap.sayi1 << " / " << hesap.sayi2 << " = " << hesap.sonuc << endl;
			break;
		default:
			cout << "\n\nYanlis degeri girdiniz. Tekrar deneyin!\n\n";
			goto A10;
			break;
	}
	cout << "\n\n\n";
	system("pause");
	return 0;
}
