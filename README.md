# Isaiah
C++ grocery menu 
#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include "Groceries.h"
using namespace std;

	void GroceryItem::set_item_name(string Name) {
		item_name = Name;
	}

	string GroceryItem::get_item_name()
	{
		return item_name;
	}

	void GroceryItem::set_item_price(float price)
	{
		item_price = price;
	}

	float GroceryItem::get_item_price() const {
		return item_price;
	}

	void GroceryItem::set_qty_on_hand(int num) {
		qty_on_hand = num;
	}

	int GroceryItem::get_qty_on_hand() const {
		return qty_on_hand;
	}

	void GroceryItem::set_qty_purchased(int purch) {
		qty_purchased = purch;
	}

	int GroceryItem::get_qty_purchased() const {
		return qty_purchased;
	}
