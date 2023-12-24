#include <stdio.h>
#include <stdlib.h>

// Daha düzenli bir deðiþken kullanýmý için struct kullanýlýr
typedef struct acikArtirma{
	
	float teklifler[50];
	int teklifVerenSayisi;
	int kazananNumara;
};


int main() {
	
	struct acikArtirma acikArtirma1;
	int i, j;
	
	// Açýk artýrma hakkýnda bilgilendirme yapýlýr
	printf("Acik artirmaya hosgeldiniz!\n\n");
	printf("Satilacak urun: Yildizli Gece Tablosu By Vincent Van Gogh\n\n");
	printf("Acik artirma baslangic tutari 100 milyon dolar\n\n");
	printf("Teklif yerine 100 girmeniz 100 milyon dolar anlamina gelmektedir.\n");
	printf("Lutfen bunu dikkate alaraktan deger giriniz\n\n");
	
	// Katýlacak kiþi sayýsý alýnýr
	printf("Katilacak kisi sayisini giriniz: ");
	scanf("%d", &acikArtirma1.teklifVerenSayisi);
	
	// Katýlýmcýlardan teklifleri alýnaraktan bir dizi oluþturulur
	for(i = 0; i < acikArtirma1.teklifVerenSayisi; i++){
		
		printf("\n%d numarali kisi lutfen teklifinizi giriniz: " ,i+1);
		scanf("%f", &acikArtirma1.teklifler[i+1]);	
	}
	
	 //En büyük teklif alt sýnýra eþitlenir
	float enBuyukTeklif = 100;
	
	// Tekliflerin olduðu dizinin elemanlarýnda dolaþýlýr ve en büyük teklif bulunur
	for(j = 0; j < acikArtirma1.teklifVerenSayisi; j++){
		
		if(acikArtirma1.teklifler[j+1] >= enBuyukTeklif){
			
			enBuyukTeklif = acikArtirma1.teklifler[j+1];
			
			acikArtirma1.kazananNumara = j+1;
		}
			
	}
	// Koþullarla doðru çýktýnýn verildiðinden emin olunur
	if(enBuyukTeklif > 100){
		
		printf("\nAcik artirmayi kazanan kisi: %d numara\n", acikArtirma1.kazananNumara);
	
		printf("Odemesi gereken tutar: %f milyon $ ", enBuyukTeklif);
	}else{
		printf("\nUrun satilamadi!");
	}

	
	return 0;
}
