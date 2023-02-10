#include<iostream>
#include "Lap_CLL_Class.h"
using namespace std;
int main(){
	int choose,data,item;
	SLL<int> get;
	while(true){
	cout<<"Please choose the correct:\n1) Add to head. \n2) Add to tail.\n3) Display.\n4) Search."<<endl;
	cout<<"5) Delete node.\n6) Delete from head.\n7) Delete from tail."<<endl;
	cin>>choose;
	if(choose==1){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
	get.addtohead(data);
	}
	else if(choose==2){
		cout<<"Please enter the data :"<<endl;
		cin>>data;
		get.addtotail(data);
	}	
	else if(choose==3){
		get.display();
	}
	
	else if(choose==4){
		cout<<"Please enter the search data in node :"<<endl;
		cin>>data;
		get.search(data);
		if(get.search(data)==0){
			cout<<"The "<<data<<" item is not found maybe the node is empty."<<endl;
		}
		else
		cout<<"The Item which you are searching about it found and is :  "<<data<<endl;	
	}

	else if(choose==5){
	cout<<"Enter The item you want to delete it :"<<endl;
	cin>>item;
	get.deletenode(item);
	}
	else if(choose==6)
	get.deletefromhead();
	else if(choose==7)
	get.deletefromtail();
}
	system("pause");
	return 0;
}
