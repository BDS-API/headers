#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class TradeResultContainerController : ContainerController {

public:
    virtual void _getAvailableAddCount(int)const;
    ~TradeResultContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    TradeResultContainerController(std::shared_ptr<ContainerModel>);
};
