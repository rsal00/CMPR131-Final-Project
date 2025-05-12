#include <iostream>
#include <set>
#include "ShoppingCart.h"
using namespace std;

int main()
{
    ShoppingCart cart;
    cart.addItem("Milk");
    cart.addItem("Chips");

    cart.listItems();

    return 0;
}
