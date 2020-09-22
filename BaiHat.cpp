#include <iostream>
#include <string>
using namespace std;

class BaiHat{
	private:
	string BaiHat,TacGia,TheLoai;
	public:
		void Nhap(){
			fflush(stdin);
			cout<<"Nhap ten bai hat: ";
			getline(cin,BaiHat);
			cout<<"Nhap ten tac gia: ";
			getline(cin,TacGia);
			cout<<"Nhap the loai: ";
			getline(cin,TheLoai);
		}
		void Xuat(){
			cout<< "Bai hat: "<<BaiHat<<" - Tac gia: "<<TacGia<< " - The loai: "<<TheLoai<<endl;
		}
		void Tim(string tukhoa){
			if(tukhoa==BaiHat){
				cout<< "Bai hat: "<<BaiHat<<" - Tac gia: "<<TacGia<< " - The loai: "<<TheLoai<<endl;
			}
		}
		
};
class QuanLy{
	private:
		int n;
		BaiHat bh[100];
	public:
		void Nhap(){
			cout<<"Nhap so bai hat: ";
			cin>>n;
			cout<<endl;
			for(int i=0;i<n;i++){
				cout<<"Nhap thong tin cho bai hat thu: "<<i+1<<endl;
				bh[i].Nhap();
				cout<<endl;
			}
		}
		void Xuat(){
			cout<<"Thong tin ve cac bai hat la: "<<endl;
			for(int i=0;i<n;i++){
				bh[i].Xuat();	
			}
		}
		void Tim(string tukhoa){
			
			for(int i=0;i<n;i++){
				bh[i].Tim(tukhoa);	
			}
		}
		
};
int main(){

	QuanLy ql;
	ql.Nhap();
	ql.Xuat();
	string tukhoa="Mua Xuan";
//	cout<<"Nhap ten bai hat can tim: ";
//	getline(cin,tukhoa);
	cout<<"Bai hat tim thay la: \n\n";
	ql.Tim(tukhoa);
	


	
	
}
