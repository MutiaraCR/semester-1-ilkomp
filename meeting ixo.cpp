#include<ncurses.h>

using namespace std;

int main(){	
	initscr();
	int tes = 0;
	string a;
	
	int ch=getch();
	move(10,10);
	
	printw("%d",tes);
	scanw("%d",&tes);
	
	mvscanw(10,10,"%d",&tes);
	mvprintw(20,10,"%d",tes);
	mvprintw(10,10,"Rara");
	
	getch(a);
	endwin();
	
}

//int main(){
//	intiscr();
//	
//	char a[10]
//	
//	move(12,10);
//	getstr(a);
//	mvprintw(13,10,%s,a);
	
	//refresh(a);
	
//}

