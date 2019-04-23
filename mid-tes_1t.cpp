/*
Nama	: Hafidh Akhdan Najib
Kelas	: A
NPM		: 140810180061
Mid test
*/

#include<iostream>
using namespace std;

struct Elemtlist{
	char tim[30];
	char daerah[15];
	int gol;
	Elemtlist* next;
};

typedef Elemtlist* pointer;
typedef pointer List;

void createList(List& First){
	First=NULL;
}

void createElmt(pointer& pBaru) {

	pBaru= new Elemtlist; 
	cout<<"Nama Tim  : ";
	cin.ignore();
	cin.getline(pBaru->tim, 30); 
	cout<<"Asal Daerah  : "; cin>> pBaru->daerah;
	cout<<"Gol	: "; cin>>pBaru->gol;
	pBaru->next = NULL; 
}

void insertLast(List& First,pointer pBaru){
	pointer last;
	if (First==NULL){ 
	First=pBaru;
	} else { 
	last=First;
	while (last->next!=NULL){
	last=last->next;
	}last->next=pBaru; 
	}
}

void traversal(List First){	
	pointer pBantu;
	pBantu=First;
	cout<<"No|\nTim|Gol"<<endl; 
	int i =1;
	do {
	cout<<i<<pBantu->tim<<pBantu->gol<<endl;
	i++;
	pBantu = pBantu->next; 
	} while(pBantu != NULL);
}

int main()
{
	pointer Baru,hapus;
	int x,n;
	List list;
	createList(list);
	while(x!=4){
	cout<<"\nMenu "<<endl;
	cout<<"1.Daftar"<<endl;
	cout<<"2.Cetak"<<endl;
	cout<<"3.Update"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Pilih (1/2/3/4) : "; cin>>x;
	switch(x){
			
	case 1:
	cout<<"Masukan jumlah pendaftar:";
	cin>>n;
	for(int i=0;i<n;i++){
	createElmt(Baru); 
	insertLast(list,Baru);
	cout<<endl;
	}	
	
	break;
		
	case 2:
	traversal(list);	
	break;	
	
	case 3:	
	//for (int i = 0 ; )
	break;
	
	case 4:	
	default:
		cout<<"Exit\n";
		exit(0);
		break;
	
	}
}

}
