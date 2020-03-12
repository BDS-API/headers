#pragma once

#include "../../item/ItemStack.h"
#include "../../item/ItemInstance.h"
#include "ContainerController.h"
#include <memory>
#include "../model/ContainerModel.h"


class TradeIngredientContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~TradeIngredientContainerController();
    TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
