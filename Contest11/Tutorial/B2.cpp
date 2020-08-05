#include<bits/stdc++.h>
using namespace std;

//De bai : Nhap vao cay nhi phan cac so nguyen.
//Output: Xuat ra man hinh cac phan tu cua cay nhi phan

struct node{
	int data; //Du lieu node
	struct node *pLeft; //node lien ket ben trai
	struct node *pRight; //node lien ket ben phai
};

typedef struct node NODE;
typedef NODE* TREE;

//Khoi tao cay
void KhoiTaoCay(TREE &t){
	t=NULL; //Cay rong
}

//Ham them phan tu x vao cay nhi phan
void ThemNodeVaoCay(TREE &t,int x){
	// Neu cay rong them x lam root
	if(t==NULL){
		NODE *p= new NODE; //Khoi tao node the vao cay
		p ->data = x; //Them du lieu x vao data
		p->pLeft= NULL;
		p->pRight = NULL;
		t = p; //Node goc - Root
	}
	else{ //Cay co ton tai phan tu roi
		//Neu phan tu them vao nho hon node goc ==> them phan tu vao ben trai 
		if(t->data > x){
			ThemNodeVaoCay(t->pLeft,x); //Duyet qua trai de them x;
		}
		else if(t->data < x){
			ThemNodeVaoCay(t->pRight,x);
		}
	}
}

//Ham xuat cay nhi phan theo NLR
void DuyetNLR(TREE t){
	//Neu cay con phan tu thi tiep tuc duyet
	if(t != NULL){
		cout<<t->data<<" ";//Xuat du lieu trong node
		DuyetNLR(t->pLeft); // Duyet qua trai
		DuyetNLR(t->pRight); // Duyet qua phai
	}
}

//Ham xuat cay nhi phan theo NLR
void DuyetNRL(TREE t){
	//Neu cay con phan tu thi tiep tuc duyet
	if(t != NULL){
		cout<<t->data<<" ";//Xuat du lieu trong node
		DuyetNRL(t->pRight); // Duyet qua phai
		DuyetNRL(t->pLeft); // Duyet qua trai
		
	}
}

//Ham xuat cay nhi phan theo LNR
void DuyetLNR(TREE t){
	//Neu cay con phan tu thi tiep tuc duyet
	if(t != NULL){
		
		DuyetLNR(t->pLeft); // Duyet qua trai
		cout<<t->data<<" ";//Xuat du lieu trong node
		DuyetNRL(t->pRight); // Duyet qua phai
		
	}
}

//Ham nhap du lieu
void Menu(TREE &t){
	while(true){
		system("cls");
		cout<<"\n\n\t\t =========== MENU ===============";
		cout<<"\n1. Nhap du lieu";
		cout<<"\n2. Xuat du lieu cay NLR";
		cout<<"\n3. Xuat du lieu cay NRL";
		cout<<"\n0. Ket thuc";
		cout<<"\n\n\t\t ================================";
		
		int luachon;
		cout<<"\nNhap lua chon : ";
		cin>>luachon;
		if(luachon <0){
			cout<<"Lua chon khong hop le";
			system("pause");
		}

		else if(luachon == 1){
			int x;
			cout<<"\nNhap so nguyen x : ";
			cin>>x;
			ThemNodeVaoCay(t,x);
		}
		else if(luachon==2){
			cout<<"\n\t\t Duyet cay theo NLR \n";
			DuyetNLR(t);
			system("pause");
		}
		else if(luachon==3){
			cout<<"\n\t\t Duyet cay theo NRL \n";
			DuyetNRL(t);
			system("pause");
		}
		else if(luachon==4){
			cout<<"\n\t\t Duyet cay theo LNR \n";
			DuyetLNR(t);
			system("pause");
		}
		else{
			break;
		}
	}
	
	
}

int main(){
	
	TREE t;
	KhoiTaoCay(t);
	Menu(t);
	
	system("pause");
	return 0;
}
