#pragma once

#include <memory>
#include "../../item/unmapped/ItemTransferAmount.h"
#include "ContainerController.h"


class MaterialReducerInputContainerController : ContainerController {

public:
    virtual void _getAvailableAddCount(int)const;
    ~MaterialReducerInputContainerController();
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    void setEnabled(bool);
    MaterialReducerInputContainerController(std::shared_ptr<ContainerModel>);
};
