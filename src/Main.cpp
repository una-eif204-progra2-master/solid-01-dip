//
// Created by Maikol Guzman Alan on 3/1/22.
//
#include <iostream>
#include "IReceiptSender.h"
#include "EmailReceiptSender.h"
#include "AppReceiptSender.h"
#include "Product.h"
#include "ProductManager.h"

using namespace std;

int main() {
    std::cout << "Welcome to the UNA! (VIRTUAL)\n" << std::endl;

    IReceiptSender* emailReceiptSender = new EmailReceiptSender();
    IReceiptSender* appReceiptSender = new AppReceiptSender();

    Product product1;
    product1.setName("Producto 1");
    product1.setPrice(100);

    ProductManager productManager;
    productManager.setProduct(product1);

    // Submit the receipt by email
    productManager.purchase(emailReceiptSender);

    // Submit the receipt by app
    productManager.purchase(appReceiptSender);

    return 0;
}
