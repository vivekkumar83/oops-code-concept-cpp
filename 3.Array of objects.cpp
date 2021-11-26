#include<iostream>
using namespace std;

class Product {
	// Data member private: only acess in the same class
	private:   
		int id;
		string name;
		int mrp;
		int selling_price;
		int user_admin_id= 1234;
		int number;

		// member function 
	public:
		void setValue(int i, string n,int m) {
			id = i;
			name = n;
			mrp = m;
		}

		void getValue(){
			cout << "id: " << id << endl;
			cout << "name: " << name << endl;
			cout << "mrp: " << mrp << endl;
		}

		void show_details() {
			cout << "These are the description of product" << endl;
			//cout << "id: " << id << endl;
			cout << "name: " << name << endl;
			cout << "mrp: " << mrp << endl;
			selling_price = mrp-(mrp * 0.1);
			cout << "selling_price: " << selling_price << endl; 
		} 

};

int main() {

	Product p[3];
	for (int i = 0; i < 3; i++) {
		int id;
		string name;
		int mrp;
		cout << "enter the value of the product_" << i+1 << ": " << endl;
		cout << "id: " << endl;
		cin >> id;
		cout << "name : " << endl;
		cin >> name;
		cout << "mrp: " << endl;
		cin >> mrp;
		p[i].setValue(id, name, mrp);
	}

	// for (int i = 0; i < 3; i++) {
	//  	p[i].getValue();
	// }

	for (int i = 0; i < 3; i++) {
		p[i].show_details();
	}
	
}
