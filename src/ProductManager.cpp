//
// Created by Maikol Guzman Alan on 3/1/22.
//

#include "ProductManager.h"

void ProductManager::purchase(IReceiptSender *receiptSender) {
    receiptSender->sendReceipt(product.getName());
}

ProductManager::ProductManager() {}

ProductManager::~ProductManager() {

}

const Product &ProductManager::getProduct() const {
    return product;
}

void ProductManager::setProduct(const Product &product) {
    ProductManager::product = product;
}
