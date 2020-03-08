#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    virtual TradeContainerManagerModel::~TradeContainerManagerModel()
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

    TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
    void getEntity()const;
    void getCurrentRecipe(int);
    void getAvailableRecipeListSize();
    bool isTradeValid(float);
    void setCurrentRecipeIndex(int);
    void recipeChanged();
};
