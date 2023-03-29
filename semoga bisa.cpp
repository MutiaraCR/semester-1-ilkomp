#include<iostream> //sebagai standar input output yg digunakan bhs c++ (cout, cin, endl)
#include<conio.h> // untuk memanggil getch(), gotoxy yaitu menampilkan hasil dengan penekanan suatu tombol misal enter
#include<cstdlib> // untuk memanggil system("cls) (sama dengan windows.h)
#include<time.h> //untuk memanipulasi waktu srand(time(0)
#include<curses.h> // untuk ncurses
#include<windows.h> //untuk warna tulisan : system()

using namespace std;

// prosedur animasi - delay
void  delay(void){
	int delay;
	delay =1;
	while(delay<10000000){
	delay++;
}
}

// gotoxy
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void atas(){
		for(int i=1 ; i<=100 ; i++){
		gotoxy(i,1);
		printf("=");
		gotoxy(i,3);
		printf("=");
		gotoxy(45,2);
		printf("GAME LEMPAR DADU");
}
}

void game(){
	int pilih, anda, skor_anda, lawan, skor_lawan, round;
	string nama1, nama2, lagi;
	skor_anda=0;
	skor_lawan=0;
	srand(time(0));
	
	b:
	atas();
	gotoxy(0,5);
	cout<<endl;
	printf(" 1. Mulai permainan \n");
	printf(" 2. Keluar \n");
	printf(" Pilihan : ");
	cin>>pilih;
	
	do{

	if(pilih == 1){
		system("cls");
	
	atas();
	cin.ignore(2,'\n');
	gotoxy(0,5);
	cout<<endl;
	cout<<" Nama pemain 1 \t:  ";
	getline(cin,nama1);
	cout<<" Nama pemain 2 \t:  ";
	getline(cin,nama2);
	cout<<endl;
	
		system ("cls");
		atas();
		gotoxy(0,5);
		cout<<endl;
		cout<<" Masukkan Round (1-5) : ";
		cin>>round;
		system("cls");
		if(round > 5){
			atas();
			gotoxy(0,5);
			cout<<" maaf ya pilhan kamu gak tersedia ^_^ "<<endl;
			goto a;
			getch();
		}
		else if(round <= 0){
			atas();
			gotoxy(0,5);
			cout<<" maaf ya pilhan kamu gak tersedia ^_^ "<<endl;
			goto a;
			getch();
		}
		
		atas();
		cin.ignore(1,'\n');
		gotoxy(0,5);
		cout<<endl;
		cout<<"===================TEKAN ENTER=================="<<endl;
		for(int i = 1; i <= round; i++){
			cin.ignore(i,'\n');
			anda  =(rand() % 6)+1;
			lawan =(rand() % 6)+1;
			cout<<"\tRound "<<i<<endl;
			getch();
			cout<<" Angka "<<nama1<<" : "<<anda<<endl;
			cout<<" Angka "<<nama2<<" : "<<lawan<<endl;
			cout<<"======================="<<endl;
			if(anda > lawan){
				skor_anda+=1;
			}else if(lawan > anda){
				skor_lawan+=1;
			}else{
				skor_anda+=0;
				skor_lawan+=0;
			}
			
		}if(skor_anda > skor_lawan){
			cout<<endl;
			system("cls");
			atas();
			gotoxy(0,5);		
			cout<<"  # Permainan berakhir #   "<<endl;
			cout<<"------- TOTAL SKOR --------"<<endl;
			cout<<"Skor "<<nama1<<" : "<<skor_anda<<endl;
			cout<<"Skor "<<nama2<<" : "<<skor_lawan<<endl;
			cout<<endl;
			cout<<"**************************"<<endl;
			cout<<"       "<<nama1<<" MENANG :D  	 "<<endl;
			cout<<"       "<<nama2<<" KALAH  :(  	 "<<endl;
			cout<<"**************************"<<endl;
			cout<<endl;
			getch();
		}else if(skor_lawan > skor_anda){
			cout<<endl;
			system("cls");
			atas();
			gotoxy(0,5);
			cout<<"  # Permainan berakhir #   "<<endl;
			cout<<"------- TOTAL SKOR --------"<<endl;
			cout<<"Skor "<<nama1<<" : "<<skor_anda<<endl;
			cout<<"Skor "<<nama2<<" : "<<skor_lawan<<endl;
			cout<<endl;
			cout<<"**************************"<<endl;
			cout<<"       "<<nama2<<" MENANG :D  	 "<<endl;
			cout<<"       "<<nama1<<" KALAH  :(  	 "<<endl;
			cout<<"**************************"<<endl;
			getch();
		}else{
			cout<<endl;
			system("cls");
			atas();
			gotoxy(0,5);
			cout<<"  # Permainan berakhir #   "<<endl;
			cout<<"------- TOTAL SKOR --------"<<endl;
			cout<<"Skor "<<nama1<<" : "<<skor_anda<<endl;
			cout<<"Skor "<<nama2<<" : "<<skor_lawan<<endl;
			cout<<endl;
			cout<<"**************************"<<endl;
			cout<<"| Seri :| 		 |"<<endl;
			cout<<"**************************"<<endl;
			getch();
		}
		
		a:
		cout<<endl;
		cout<<" Lanjut bermain ? [y/n] : ";
		cin>>lagi; 
		
	}else if(pilih == 2){
		lagi = "n";
	}else{
		cout<<endl;
		system("cls");
		atas();
		gotoxy(0,5);
		printf(" Maaf ya pilihan kamu gak tersedia ^_^ ");
		goto b;
	}
	} while ( lagi == "y" || lagi == "Y");
		system("cls");
		atas();
		gotoxy(0,5);
		cout<<" OK, SEE YOU NEXT TIME >< ";
		getch();
		exit(0);
}
	

int main(){
	int i,j;
	char ulang;
	int pilih, anda, skor_anda, lawan, skor_lawan, round;
	string nama1, nama2, lagi;
	skor_anda=0;
	skor_lawan=0;
	srand(time(0));
	
	//warna tulisan
	for(i=40 ; i<=75 ; i++ ){
		gotoxy(i,12);
		printf("-");
		gotoxy(i,14);
		printf("-");
		system("color B");
		delay();
		
	}
	
	for(i=1 ; i<=100 ; i++){
		gotoxy(46,13);
		cout<<"SEDANG MEMUAT GAME...."<<i<<" %";
		delay();
	}
	system("cls");
	
	//bingkai bawah
	for(i=1 ; i<=100 ; i++){
		gotoxy(i,40);
		printf("=");
		gotoxy(i,42);
		printf("=");
		gotoxy(i,50);
		printf("=");
		delay();
	}
	
	
	//bingkai samping
	for(i=1 ; i<=50 ; i++){
		gotoxy(1,i);
		printf("=");
		gotoxy(100,i);
		printf("=");
		delay();
		
	//teks
	gotoxy(45,2);
	cout<<"GAME LEMPAR DADU";
	gotoxy(43,41);
	cout<<" KELOMPOK 6 ";
	gotoxy(30,45);
	cout<<"1. KYLA NISRINA ANGGRAHINI  (2267051002)";
	gotoxy(30,46);
	cout<<"2. MUTIARA CINTIA RAINY 	  (2217051100)";
	gotoxy(30,47);
	cout<<"3. THERESIA TRI OKTAVIA	  (2217051111)";	
		
		game();
	}
	
getch();
return 0;	
}
