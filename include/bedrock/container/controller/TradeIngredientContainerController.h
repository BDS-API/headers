#pragma once

#include "../../item/ItemStack"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class TradeIngredientContainerController : ContainerController {

public:
    TradeIngredientContainerController::~TradeIngredientContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;

    TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
