//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_DIP_IRECEIPTSENDER_H
#define SOLID_01_DIP_IRECEIPTSENDER_H
#include <iostream>

class IReceiptSender {
public:
    virtual ~IReceiptSender() {

    }

    virtual void sendReceipt(std::string productName) const = 0;
};
#endif //SOLID_01_DIP_IRECEIPTSENDER_H
