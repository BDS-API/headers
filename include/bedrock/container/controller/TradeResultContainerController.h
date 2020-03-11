#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class TradeResultContainerController : ContainerController {

public:
    virtual ~TradeResultContainerController();
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    TradeResultContainerController(std::shared_ptr<ContainerModel>);
};
