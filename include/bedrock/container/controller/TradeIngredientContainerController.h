#pragma once

#include <memory>
#include "ContainerController.h"


class TradeIngredientContainerController : ContainerController {

public:
    virtual bool isItemAllowed(ItemInstance const&)const;
    ~TradeIngredientContainerController();
    TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
