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
		void setValue(int i, string n) {
			cout << "enter admin user id: ";
			cin >> number;
			if (number == user_admin_id) {
				id = i;
				name = n;
			}else {
				cout << "you have no autority to set value" << endl;
			}
		}

		void getValue(){
			cout << "id: " << id << endl;
			cout << "name: " << name << endl;
		}

		void setMrp(int price) {
			mrp = price;
		}

		int getMrp() {
			return mrp;
		}

		void setSellingPrice() {
			selling_price = mrp-(mrp * 0.1);
		}

		int getSellingPrice() {
			return selling_price;
		}

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
	camera.setValue(11, "canon camera");
	camera.getValue();
	camera.setMrp(2000);
	camera.getMrp();
	camera.setSellingPrice();
	camera.getSellingPrice();
	camera.show_details();
}
