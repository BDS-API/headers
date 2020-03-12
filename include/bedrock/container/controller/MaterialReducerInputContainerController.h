#pragma once

#include "../../item/unmapped/ItemTransferAmount.h"
#include "../../item/ItemInstance.h"
#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"


class MaterialReducerInputContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    ~MaterialReducerInputContainerController();
    virtual void _getAvailableAddCount(int)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    MaterialReducerInputContainerController(std::shared_ptr<ContainerModel>);
    void setEnabled(bool);
};
