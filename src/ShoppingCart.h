/*
    Ruben Salazar
    CMPR 131
    May 8, 2025

    Final Project

    Collaboration:
    None
*/

#ifndef SHOPPINGCART_H
#define SHOPPINGCART_H

#include <set>
using namespace std;

struct Item
{
    string name;
    double price;
    Item() : name(""), price(0.0) {}
    Item(string n) : name(n), price(0.0) {}
    Item(string n, double p) : name(n), price(p) {}

    bool operator<(const Item& other) const
    {
        return name < other.name;
    }
};

class ShoppingCart
{
public:
    ShoppingCart();
    ~ShoppingCart();
    ShoppingCart(const ShoppingCart& other);

    void addItem();
    void removeItem(string item);
    void listItems() const;
    void clearCart();
    void saveCart();

    double sumPrices();

    bool checkCase(string cName);
    int getNumOfItems() const;

    friend ostream& operator<<(ostream& out, const ShoppingCart& myCart);

private:
    set<Item> cart;

    void createItem(Item& item, bool& put)
};

#endif
