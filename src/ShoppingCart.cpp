#include "ShoppingCart.h"
#include <iostream>

ShoppingCart::ShoppingCart()
{

}

ShoppingCart::~ShoppingCart()
{

}

ShoppingCart::ShoppingCart(const ShoppingCart& other)
{

}

void ShoppingCart::addItem(string item)
{
    cart.insert(item);
}

void ShoppingCart::removeItem(string item)
{
    cart.erase(item);
}

void ShoppingCart::listItems() const
{
    int count = 1;
    for (string i : cart)
    {
        cout << "Item " << count++ << ": " << i << endl;
    }
}

void ShoppingCart::clearCart()
{
    if (cart.empty())
    {
        cout << "Cart is empty!" << endl;
        return;
    }
    cart.clear();
    cout << "Successfully cleared!" << endl;
}

void ShoppingCart::saveCart()
{

}

bool ShoppingCart::checkCase()
{

}

int ShoppingCart::getNumOfItems() const
{

}

ostream& operator<<(ostream& out, const ShoppingCart& myCart)
{

}

ShoppingCart& ShoppingCart::operator=(const ShoppingCart& rhs)
{

}
