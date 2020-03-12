#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"


class TradeResultContainerController : ContainerController {

public:
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    ~TradeResultContainerController();
    virtual void _getAvailableAddCount(int)const;
    TradeResultContainerController(std::shared_ptr<ContainerModel>);
};
