
#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <string>
#include "bintree.h"
#include "customer.h"
#include "customerhash.h"
using namespace std;

class Transaction
{
    private:
    public:
        Transaction();
        ~Transaction();
        virtual void perform(BinTree&, int, string, char, CustomerHash&) { cout << "perform" << endl;}
};

#endif