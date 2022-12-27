#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

	int KategoriNum=0,Adet=0,Numara=0; // Switch Kategori ve Alt Kategorilerdeki Seçimler Ýçin
	
	int i=5; // while'ýn devamý Ýçin 5 verdim.Döngüden çýkma sorusunda  çýkacaksa i=0 tanýmladým döngü bitebilsin diye
	int KartNum=0; // ödeme yöntemi belirleme için
	
	int Fiyat[17];
	int m;
	int x=0; // döngüden çýkma veya çýkmama sorusunun sorulduðu yer için olan deðiþken
	
	char isim[20],Soyisim[20],Adres[100],TelNo[12];
	
	
int main()
{
	setlocale(LC_ALL, "Turkish"); 

	bilgi();
	
	while(i>1)
	{
			Karsilama_Metni();
			
			scanf("%d",&KategoriNum);
			
			switch(KategoriNum)
			{
				case 1:
						printf("\n1-Yarim Kilo Sut=10 TL\n2-Yarim Kilo Peynir=35 TL\n3-Yarim Kilo Yogurt=20 TL\n\nistediginiz Urunun Numarasini ve Adedini Sirasiyla Yaziniz: ");
						scanf("%d %d",&Numara,&Adet);
			
						if(Numara==1)
						{
							Fiyat[0]=Adet*10;
								
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[0]);
							break;
						}
						
						else if(Numara==2)
						{
							Fiyat[1]=Adet*35;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[1]);
							break;
						}
						
						else if(Numara==3)
						{
							Fiyat[2]=Adet*20;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[2]);
							break;
						}
						
						else
						{
							printf("Yanlis Alt Kategori Numarasi Girdiniz");
							break;
						}
				
				case 2:
						printf("\n1-Yarim Kilo Domates=9 TL\n2-Yarim Kilo Havuc=13 TL\n3-Yarim Kilo Elma=15 TL\n\nistediginiz Urunun Numarasini ve Adedini Sirasiyla Yaziniz: ");
						scanf("%d %d",&Numara,&Adet);
			
						if(Numara==1)
						{
							Fiyat[3]=Adet*9;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[3]);
							break;
						}
						
						else if(Numara==2)
						{
							Fiyat[4]=Adet*13;
						
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[4]);
							break;
						}
						
						else if(Numara==3)
						{
							Fiyat[5]=Adet*15;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[5]);
							break;
						}
						
						else
						{
							printf("Yanlis Alt Kategori Numarasi Girdiniz");
							break;
						}
					
				case 3:
						printf("\n1-Gofret=7 TL\n2-Sutlac=25 TL\n3-Biskuvi=17 TL\n\nistediginiz Urunun Numarasini ve Adedini Sirasiyla Yaziniz: ");
						scanf("%d %d",&Numara,&Adet);
			
						if(Numara==1)
						{
							Fiyat[6]=Adet*7;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[6]);
							break;
						}
						
						else if(Numara==2)
						{
							Fiyat[7]=Adet*25;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[7]);
							break;
						}
						
						else if(Numara==3)
						{
							Fiyat[8]=Adet*17;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[8]);
							break;
						}
						
						else
						{
							printf("Yanlis Alt Kategori Numarasi Girdiniz");
							break;
						}
						
				case 4:
						printf("\n1- 1 Litre Cola=15 TL\n2- 1 Litre Fanta=13 TL\n3- 1 Litre Sprite=12 TL\n4-Yarim Litre Su=3 TL\n\nistediginiz Urunun Numarasini ve Adedini Sirasiyla Yaziniz: ");
						scanf("%d %d",&Numara,&Adet);
			
						if(Numara==1)
						{
							Fiyat[9]=Adet*15;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[9]);
							break;
						}
						
						else if(Numara==2)
						{
							Fiyat[10]=Adet*13;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[10]);
							break;
						}
						
						else if(Numara==3)
						{
							Fiyat[11]=Adet*12;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[11]);
							break;
						}
						
						else if(Numara==4)
						{
							Fiyat[12]=Adet*3;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[12]);
							break;
						}
						
						else
						{
							printf("Yanlis Alt Kategori Numarasi Girdiniz");
							break;
						}
						
				case 5:
						printf("\n1-Yarim Kilo Pirinç=17 TL\n2-Yarim Kilo Makarna=11 TL\n3-Yarim Kilo Fasulye=14 TL\n4-Yarim Kilo Bulgur=20 TL\n\nistediginiz Urunun Numarasini ve Adedini Sirasiyla Yaziniz: ");
						scanf("%d %d",&Numara,&Adet);
			
						if(Numara==1)
						{
							Fiyat[13]=Adet*17;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[13]);
							break;
						}
						
						else if(Numara==2)
						{
							Fiyat[14]=Adet*11;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[14]);
							break;
						}
						
						else if(Numara==3)
						{
							Fiyat[15]=Adet*14;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[15]);
							break;
						}
						
						else if(Numara==4)
						{
							Fiyat[16]=Adet*20;
							
							printf("Siparisiniz Alinmistir.Ucretiniz %d TL'dir\n\n",Fiyat[16]);
							break;
						}
						
						else
						{
							printf("Yanlis Alt Kategori Numarasi Girdiniz");
							break;
						}
													
			}				
							Odeme_Yontemi();
						
	}
						printf("\nBizi Tercih Ettiginiz icin Tesekkur Ederiz");

	return 0;
}


	int bilgi()
	{
		setlocale(LC_ALL, "Turkish");
		
	 	printf("****Sistemi Kullanabilmek icin Bilgilerinizi Giriniz****\n\n");
	
		
	 	
		 	for(m=0;m<1;m++)
		 	{
			 	printf("isminizi Giriniz: ");
			 	gets(isim);
				printf("\nSoyisminizi Giriniz: ");
			 	gets(Soyisim);
			
			 	strcat(isim,Soyisim);
			 	printf("%s",isim);
			
			 	printf(" Adresinizi Giriniz: ");
			 	scanf("%s",&Adres);
			 	gets(Adres);
			
			 	printf("\nTelefon Numaranizi Bosluk Birakmadan Giriniz: ");
				
				 while(1)
				{	
					scanf("%s", &TelNo);
					
    			if (strlen(TelNo) != 11)
    			{
    	    		printf("Girilen Telefon Numarasý Numarasý 11 Haneli Deðil. Lütfen Geçerli Bir Telefon Numarasý Giriniz.\n");
    
				}
				
    			else
				{
					break;
				}
				
				}			
		 	}
		 	bilgi_kaydetme();
	}
	
	int Odeme_Yontemi()
	{
		printf("***Odeme Yontemi***\n\n1-Kredi Karti\n2-Kapida Odeme\n\nOdeme Yontemi Seciniz: ");
		scanf("%d",&KartNum);
							
			if(KartNum==3)
			{
				printf("Yanlis Odeme Yontemi\n");
			}
				printf("Baska Bir Sey Almak isterseniz 1'e istemezseniz 0'a Basiniz: ");
				scanf("%d",&x);
							
					if(x==1)
					{
						i=2;
							
					}
					else 
						i=0;
						
	}
	
	void Karsilama_Metni()
	{
		printf("\n****MENU*****\n1-Sut ve Sut Urunleri\n2-Meyve ve Sebze\n3-Atistirmalik ve Tatlilar\n4-icecekler\n5-Temel Gida\n\nSecmek istediginiz Kategori Numarasini Yaziniz: ");
		
		
	}
	
	int bilgi_kaydetme()
	{
			FILE *fp;
		 	fp = fopen("veriler.txt", "a");
		 	
	    if (fp == NULL)
	    {
	        printf("Dosya açýlamadý!\n");
	    }
	
	    fprintf(fp, "isim: %s\n", isim);
	    fprintf(fp, "Soyisim: %s\n", Soyisim);
		fprintf(fp, "Adres: %s\n", Adres);
		fprintf(fp, "Telefon Numarasi: %s\n", TelNo);
		
	    fclose(fp);
	}
