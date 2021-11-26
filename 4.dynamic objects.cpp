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
	Product *ptr = new Product;
	Product *pro = new Product[3];
	Product *protemp = pro;

	// ptr->setValue(11, "camera", 2500);
	// ptr->getValue();
	// ptr->show_details();

	for (int i = 0; i < 3; i++) {
		int id;
		string name;
		int mrp;
		cout<< "id: " << "name: " << "mrp: ";
		cin >> id >> name >> mrp;
		pro->setValue(id,name,mrp);
		pro++;
	}

	for (int i = 0; i < 3; i++) {
	 	protemp->show_details();
	 	protemp++;
	}
	
}
