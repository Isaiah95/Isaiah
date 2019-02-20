#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
using namespace std;
class GroceryItem {
	string item_name;
	float item_price;
	int qty_on_hand;
	int qty_purchased;
public:

	GroceryItem() { qty_purchased = 0; };
	void set_item_name(string Name);
	string get_item_name();
	void set_item_price(float price);
	float get_item_price() const;
	void set_qty_on_hand(int num);
	int get_qty_on_hand() const;
	void set_qty_purchased(int purch);
	int get_qty_purchased() const;

};
