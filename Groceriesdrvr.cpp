#include "Groceries.h"
using namespace std;

void print_grocery(GroceryItem &alt) {
	cout << "Item name: " << alt.get_item_name() << endl;
	cout << "Item price: " << alt.get_item_price() << endl;
	cout << "Items available: " << alt.get_qty_on_hand() << endl;
	cout << "Enter the amount you want to buy: ";
	int qty;
	cin >> qty;
	if (qty > alt.get_qty_on_hand()) cout << "Not Enough in stock" << endl;
	else alt.set_qty_purchased(qty);
}

void print_purchased_grocery(GroceryItem &alt) {
	cout << setw(20) << left << alt.get_item_name() << "\t" << alt.get_item_price() << "\t" << "\t" << alt.get_qty_purchased() << "\t" << alt.get_item_price() * alt.get_qty_purchased() << endl;
}
int main() {
	GroceryItem grocery[10];
	char filename[] = "O:\\S_DBELLEHSEN\\CST3503\\HW\\Grocery.dat";
	string line;
	int k = 0;
	ifstream myfile(filename);
	while (getline(myfile, line)) {
		grocery[k].set_item_name(line);
		getline(myfile, line);
		grocery[k].set_item_price(stof(line));
		getline(myfile, line);
		grocery[k].set_qty_on_hand(stoi(line));
		k++;
	}

	for (int i = 0; i < 10; i++) {
		print_grocery(grocery[i]);
	}

	float total = 0;
	cout << setw(20) << left << "Item Name" << " \tPrice\tQuantity\tTotal Cost" << endl;
	for (int i = 0; i < 10; i++) {
		if (grocery[i].get_qty_purchased() > 0) {
			total += grocery[i].get_item_price() *grocery[i].get_qty_purchased();
			print_purchased_grocery(grocery[i]);
		}
	}
	cout << "Total Cost: " << total << endl;
	cout << "Your Order is on it's way!" << endl;
	return 0;
}
