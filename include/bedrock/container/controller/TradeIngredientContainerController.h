#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../item/ItemStack"


class TradeIngredientContainerController : ContainerController {

public:
    virtual TradeIngredientContainerController::~TradeIngredientContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
