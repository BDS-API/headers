#pragma once

class TradeIngredientContainerController : ContainerController {

public:
    virtual ~TradeIngredientContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;

    void TradeIngredientContainerController(std::shared_ptr<ContainerModel>);
    void setTradeItem(ItemStack const&);
};
