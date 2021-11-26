#include<iostream>
using namespace std;

class Product {
	// Data member public: Access from any where
	public:   
		int id;
		string name;
		int mrp;
		int selling_price;
		// member function 
		void show_details() {
			cout << "These are the description of product" << endl;
			cout << "id: " << id << endl;
			cout << "name: " << name << endl;
			cout << "mrp: " << mrp << endl;
			cout << "selling_price: " << selling_price << endl; 
		} 

};

int main() {

	Product camera;
	// intilize each value by using dot(.) operator
	camera.id = 101;
	camera.name = "Canon Camera";
	camera.mrp = 2000;
	camera.selling_price = 1900;

	cout << "id: " << camera.id << endl;
	// calling the member function by using dot(.) operator
	camera.show_details();
}