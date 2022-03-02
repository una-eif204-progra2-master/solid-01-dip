//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_ISP_PRODUCTMANAGER_H
#define SOLID_01_ISP_PRODUCTMANAGER_H


#include "IReceiptSender.h"
#include "Product.h"

class ProductManager {
private:
    Product product;
public:
    ProductManager();

    virtual ~ProductManager();

    const Product &getProduct() const;

    void setProduct(const Product &product);

    void purchase (IReceiptSender* receiptSender);
};


#endif //SOLID_01_ISP_PRODUCTMANAGER_H
