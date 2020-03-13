#pragma once

#include <memory>
#include "ContainerController.h"
#include "../../item/unmapped/ItemTransferAmount.h"


class TradeResultContainerController : ContainerController {

public:
    ~TradeResultContainerController(); // _ZN30TradeResultContainerControllerD2Ev
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const; // _ZNK30TradeResultContainerController7_canSetEiRK18ContainerItemStack18ItemTransferAmount
    virtual void _getAvailableAddCount(int)const; // _ZNK30TradeResultContainerController21_getAvailableAddCountEi
    TradeResultContainerController(std::shared_ptr<ContainerModel>); // _ZN30TradeResultContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
