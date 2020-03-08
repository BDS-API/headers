#pragma once

#include "../../item/unmapped/ItemTransferAmount"
#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"


class TradeResultContainerController : ContainerController {

public:
    TradeResultContainerController::~TradeResultContainerController()
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableAddCount(int)const;

    TradeResultContainerController(std::shared_ptr<ContainerModel>);
};
