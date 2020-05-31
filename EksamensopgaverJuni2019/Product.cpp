#include "Product.h"
#include <iterator>

Product::Product()
{
// Defualt constructor
}

Product :: Product(const char* name, double price)
{
    // Constructor til at udregnee antal char i et char array
    int size = 0;

    while(name[size] != '\0'){
        size++;
    }

    char * chrPtr = new char[size];
    for(int i = 0; i < size; i++){
        chrPtr[i] = name[i];
    }

    mName = chrPtr;
    mPrice = price;
}

char* Product::getName()const
{

    return mName;
}

void Product::setName(char *name)
{

    mName = name;
}

double Product::getPrice() const
{
    return mPrice;
}

void Product::setPrice(double price)
{
    mPrice = price;
}

// Insertion operator (<<)
std :: ostream& operator<< (std :: ostream& ost, const Product& p){

    return  ost << p.getName() << " " << p.getPrice() << std ::endl;


}


//bool Product:: operator==(const Product & p){

//    mName = p.getName();
//    mPrice = p.getPrice();

//    return p.getName(), p.getPrice();
//}
