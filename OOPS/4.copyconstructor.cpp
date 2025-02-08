#include<bits/stdc++.h>
#include<iostream>
#include<math.h>
using namespace std;
class Product{

private:
	int id; 
	char name[100]; 
    int mrp; 
	int selling_price; 
public: 
//constructor
	Product(){
		cout<<"inside constructor";
	}
	Product(int id, char *n,int mrp, int selling_price){
		this->id=id;
		this->mrp=mrp;
		this->selling_price=selling_price;
		strcpy(name,n);
	}
	/*
	Product(Product &X){
		//create the copy
		id=X.id;
		//name=X.name; //array
		mrp=X.mrp;
		selling_price=X.selling_price;
	}
*/
	void setMrp(int price){
        mrp=price;
    }
    void setSellingPrice(int price){
		if(price>mrp){
			 selling_price=mrp;
		}
		else{
			selling_price=price;
		}
	}
	//getters returns some property of product
	int getMrp(){
       return mrp;
    }
    int getSellingPrice(){
        return selling_price;
    }
	void showDetails(){
		cout<<"Name : "<<name<<endl;
		cout<<"Id : "<<id<<endl;
		cout<<"Selling Price : "<<selling_price<<endl;
		cout<<"MRP : "<<mrp<<endl;
		cout<<"===================="<<endl;
	}
};

int main() {
	//Product camera;
	Product camera(101,"gopro9",28000,26000);
	//camera.showDetails();
	Product webcam(camera);
	Product handyCam=camera; //call to copy constructor

	camera.showDetails();
	camera.showDetails();
	handyCam.showDetails();
	//camera.mrp=100;
	//camera.selling_price=200;
//camera.setMrp(100);
//	camera.setSellingPrice(190);

//	cout<<sizeof(camera) <<endl;

//	cout<<"MRP "<<camera.getMrp() <<endl;
//	cout<<"SELLING PRICE "<<camera.getSellingPrice() <<endl;
//	return 0;
}

