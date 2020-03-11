#pragma once

#include <memory>
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"
#include "../../item/ItemStack.h"
#include "./ContainerController.h"


class TradeIngredientContainerController : ContainerController {

public:
    virtual ~TradeIngredientContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
