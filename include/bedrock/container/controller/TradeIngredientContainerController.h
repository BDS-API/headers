#pragma once

#include <memory>
#include "ContainerController.h"


class TradeIngredientContainerController : ContainerController {

public:
    ~TradeIngredientContainerController(); // _ZN34TradeIngredientContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK34TradeIngredientContainerController13isItemAllowedERK12ItemInstance
    TradeIngredientContainerController(std::shared_ptr<ContainerModel>); // _ZN34TradeIngredientContainerControllerC2ESt10shared_ptrI14ContainerModelE
    void setTradeItem(ItemStack const&); // _ZN34TradeIngredientContainerController12setTradeItemERK9ItemStack
};
