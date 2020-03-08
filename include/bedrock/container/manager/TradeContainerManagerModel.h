#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    TradeContainerManagerModel::~TradeContainerManagerModel()
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
