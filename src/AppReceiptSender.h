//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_DIP_APPRECEIPTSENDER_H
#define SOLID_01_DIP_APPRECEIPTSENDER_H


#include "IReceiptSender.h"

class AppReceiptSender : public IReceiptSender {
public:
    void sendReceipt(std::string productName) const override;
};


#endif //SOLID_01_DIP_APPRECEIPTSENDER_H
