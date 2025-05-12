#ifndef SHOPPINGCART_H
#define SHOPPINGCAR_H

#include <set>
using namespace std;

class ShoppingCart
{
public:
    ShoppingCart();
    ~ShoppingCart();
    ShoppingCart(const ShoppingCart& other);

    void addItem(string item);
    void removeItem(string item);
    void listItems() const;
    void clearCart();
    void saveCart();

    bool checkCase();
    int getNumOfItems() const;

    friend ostream& operator<<(ostream& out, const ShoppingCart& myCart);
    ShoppingCart& operator=(const ShoppingCart& rhs);

private:
    set<string> cart;
};

#endif
