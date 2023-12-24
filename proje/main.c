#include <stdio.h>
#include <stdlib.h>

// Daha d�zenli bir de�i�ken kullan�m� i�in struct kullan�l�r
typedef struct acikArtirma{
	
	float teklifler[50];
	int teklifVerenSayisi;
	int kazananNumara;
};


int main() {
	
	struct acikArtirma acikArtirma1;
	int i, j;
	
	// A��k art�rma hakk�nda bilgilendirme yap�l�r
	printf("Acik artirmaya hosgeldiniz!\n\n");
	printf("Satilacak urun: Yildizli Gece Tablosu By Vincent Van Gogh\n\n");
	printf("Acik artirma baslangic tutari 100 milyon dolar\n\n");
	printf("Teklif yerine 100 girmeniz 100 milyon dolar anlamina gelmektedir.\n");
	printf("Lutfen bunu dikkate alaraktan deger giriniz\n\n");
	
	// Kat�lacak ki�i say�s� al�n�r
	printf("Katilacak kisi sayisini giriniz: ");
	scanf("%d", &acikArtirma1.teklifVerenSayisi);
	
	// Kat�l�mc�lardan teklifleri al�naraktan bir dizi olu�turulur
	for(i = 0; i < acikArtirma1.teklifVerenSayisi; i++){
		
		printf("\n%d numarali kisi lutfen teklifinizi giriniz: " ,i+1);
		scanf("%f", &acikArtirma1.teklifler[i+1]);	
	}
	
	 //En b�y�k teklif alt s�n�ra e�itlenir
	float enBuyukTeklif = 100;
	
	// Tekliflerin oldu�u dizinin elemanlar�nda dola��l�r ve en b�y�k teklif bulunur
	for(j = 0; j < acikArtirma1.teklifVerenSayisi; j++){
		
		if(acikArtirma1.teklifler[j+1] >= enBuyukTeklif){
			
			enBuyukTeklif = acikArtirma1.teklifler[j+1];
			
			acikArtirma1.kazananNumara = j+1;
		}
			
	}
	// Ko�ullarla do�ru ��kt�n�n verildi�inden emin olunur
	if(enBuyukTeklif > 100){
		
		printf("\nAcik artirmayi kazanan kisi: %d numara\n", acikArtirma1.kazananNumara);
	
		printf("Odemesi gereken tutar: %f milyon $ ", enBuyukTeklif);
	}else{
		printf("\nUrun satilamadi!");
	}

	
	return 0;
}
