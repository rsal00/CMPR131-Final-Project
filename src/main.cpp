/*
    Ruben Salazar
    CMPR 131
    May 8, 2025

    Final Project

    Collaboration:
    Bao
*/

#include <iostream>
#include "ShoppingCart.h"
#include "input.h"
using namespace std;

int main()
{
    ShoppingCart cart;
    char choice;

    while (choice != 'x')
        {
            cout << "1) Add item to your cart\n";
            cout << "2) Display your cart\n";
            cout << "3) Remove item from you cart\n";
            cout << "4) Clear your cart\n";
            cout << "5) Save cart\n";
            cout << "6) See the number of items in your cart\n";
            cout << "7) See total price\n";
            cout << "x) Exit\n";

            cout << "Choose an option: ";
            cin >> choice;

            //string item;
            switch (choice)
            {
                case '1':
                    //cart.addItem();
                    string name  = inputString("Enter item name : ", true)<< '\n';
                    double price = inputDouble("Enter item price: $", true)<< '\n';

                    cart.addItem(name, price);
                    break;
                case '2':
                    cout << endl;
                    cout << cart;
                    cout << endl;
                    break;
                case '3':
                    /*cout << "What item do you want to remove?: ";
                    cin >> item;
                    cout << endl;
                    cart.removeItem(item);
                    cout << endl;*/

                    string item = inputString("What item do you want to remove? ", true) << '\n';
                    cart.removeItem(item);
                    break;
                case '4':
                    cout << endl;
                    cart.clearCart();
                    cout << endl;
                    break;
                case '5':
                    cout << endl;
                    cart.saveCart();
                    cout << endl;
                    break;
                case '6':
                    cout << endl;
                    cout << "Number of items in cart: " << cart.getNumOfItems() << endl << endl;
                    break;
                case '7':
                    cout << endl;
                    cout << "Total Price: " << cart.sumPrices() << endl << endl;
                    break;
                case 'x':
                    break;
                default:
                    cout << endl;
                    cout << "Invalid input!\n";
                    break;
            }
        }

    return 0;
}
