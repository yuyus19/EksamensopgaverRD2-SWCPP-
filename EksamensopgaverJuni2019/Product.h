#ifndef PRODUCT_H
#define PRODUCT_H
#include <array>
#include <string>
#include <iostream>

class Product
{
public:
    // Defualt constructor
    Product();
    // Constructor
    Product(const char* name, double price);

    // Copy constructor
    Product(const Product& p) : mName(p.getName()), mPrice(p.getPrice()){}

    // Move Constructor
    Product(Product&& p) : mName(p.getName()), mPrice(p.getPrice()){}

    // Copy assignment
    Product& operator=(const Product& Product) { mName = Product.getName(), mPrice = Product.getPrice(); return *this; }

    // Move assignment
    Product& operator=(Product&& Product) { mName = std::move(Product.getName()), std :: move(Product.getPrice()); return *this; }

    //Ligemed operator '=='
    bool operator==(const Product & p){return mName == p.getName() && mPrice == p.getPrice();}

    //Incertion operator '<<'
    friend std :: ostream& operator<< (std :: ostream& ost, const Product& p);


    char *getName() const;
    void setName(char *name);

    double getPrice() const;
    void setPrice(double price);

private:

    char *mName;
    double mPrice;
};

#endif // PRODUCT_H
