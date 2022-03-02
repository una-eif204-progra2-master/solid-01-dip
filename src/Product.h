//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_SRP_PRODUCT_H
#define SOLID_01_SRP_PRODUCT_H
#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;

public:
    Product();

    virtual ~Product();

    const string &getName() const;

    void setName(const string &name);

    double getPrice() const;

    void setPrice(double price);
};


#endif //SOLID_01_SRP_PRODUCT_H
