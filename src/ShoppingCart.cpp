#include "ShoppingCart.h"
#include <iostream>

ShoppingCart::ShoppingCart()
{
}

ShoppingCart::~ShoppingCart()
{
    cart.clear();
}

ShoppingCart::ShoppingCart(const ShoppingCart& other)
{
    cart = other.cart;
}

void ShoppingCart::addItem()
{
    cart.insert(createItem());
}

Item ShoppingCart::createItem()
{
    string userItem;
    double userPrice;
    cout << "Enter the name of item " << (cart.size() + 1) << ": ";
    cin >> userItem;
    cout << "Enter the price of item " << (cart.size() + 1) << ": ";
    cin >> userPrice;
    cout << endl;

    if (checkCase(userItem))
    {
        return Item();
    }

    return Item(userItem, userPrice);
}

void ShoppingCart::removeItem(string item)
{
    Item temp(item);
    auto key = cart.find(temp);

    if (key != cart.end())
    {
        cart.erase(key);
        cout << "Successfully removed " << temp.name << "!" << endl;
    }
    else
    {
        cout << "Item not found!" << endl;
    }
    cout << endl;
}

void ShoppingCart::listItems() const
{
    int count = 1;
    for (auto i : cart)
    {
        cout << "Item " << count++ << ": " << i.name << endl;
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

double ShoppingCart::sumPrices()
{
    set<Item>::iterator it = cart.begin();
    double sum = 0;
    while (it != cart.end())
    {
        sum += it->price;
        it++;
    }
    return sum;
}

bool ShoppingCart::checkCase(string cName)
{
    int sameCount = 0;

    set<Item>::iterator it = cart.begin();
    int i = 0;
    while (it != cart.end())
    {
        for (int i = 0; i < cName.size(); i++)
        {
            int difference = cName[i] - it->name[i];

            // Checks each letter and if the difference is 32 or -32, it means that r_str is lowercase
            // and c_str is uppercase or vice versa (a - A = 32) or (A - a = -32).
            // If the difference is 0 it means they are the same (a - a = 0) or (A - A = 0).
            if (difference == 32 || difference == -32  || difference == 0)
            {
                sameCount++;
            }
        }
        it++;
    }

    // If the count on if the letters are the same is the same as the word, the words are the same
    if (sameCount == cName.size())
    {
        return true;
    }

    return false;
}

int ShoppingCart::getNumOfItems() const
{
    return cart.size();
}

ostream& operator<<(ostream& out, const ShoppingCart& myCart)
{
    if (myCart.cart.empty())
    {
        cout << "Cart is empty!" << endl;
        return out;
    }

    int count = 1;
    for (auto i : myCart.cart)
    {
        out << "Item " << count << " Name: " << i.name << endl;
        out << "Item " << count++ << " Price: " << i.price << endl << endl;
    }
    return out;
}
