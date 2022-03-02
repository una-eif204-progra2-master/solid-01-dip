//
// Created by Maikol Guzman Alan on 3/1/22.
//

#ifndef SOLID_01_DIP_EMAILRECEIPTSENDER_H
#define SOLID_01_DIP_EMAILRECEIPTSENDER_H


#include "IReceiptSender.h"

class EmailReceiptSender : public IReceiptSender {
public:
    void sendReceipt(std::string productName) const override;
};


#endif //SOLID_01_DIP_EMAILRECEIPTSENDER_H
