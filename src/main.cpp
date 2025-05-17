#include <iostream>
#include "ShoppingCart.h"
using namespace std;

int main()
{
    ShoppingCart cart;
    cart.addItem();
    cart.addItem();

    cout << cart.sumPrices() << endl;

    return 0;
}
