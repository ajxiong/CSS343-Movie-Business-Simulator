#ifndef BORROW_H
#define BORROW_H
#include "transaction.h"

class Borrow : public Transaction
{
    private:
    public:
    Borrow();
    ~Borrow();
    void display(BinTree&, BinTree&, BinTree&, int, string, char, Hashtable&);
};

#endif