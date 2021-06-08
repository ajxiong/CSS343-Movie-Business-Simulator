#include "history.h"
#include <iostream>
#include <string>

History::History(){}

History::~History(){}

void History::display(BinTree& comedyTree, BinTree& dramaTree, BinTree& classicTree, Hashtable& table, char genre, int custID, string name)
{
    Customer* customer;
    bool customerIn = table.find(custID, customer);

    if (customerIn) {
        cout << "--------------------------------------" << endl;
        cout << customer->getFirstName() << " " << customer->getLastName() << " - "
            << "ID: " <<customer->getID() << endl << endl;
        cout << "Transaction History: " << endl;
        customer->display();
        cout << endl;
    }
    else {
        cout << "There no customer with this ID/ name" << endl;
    }
}
