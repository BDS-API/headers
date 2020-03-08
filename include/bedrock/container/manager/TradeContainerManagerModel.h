#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../actor/Player"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    virtual TradeContainerManagerModel::~TradeContainerManagerModel();
    virtual void getItems(void);
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init(void);

    TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&);
    void getEntity(void)const;
    void getCurrentRecipe(int);
    void getAvailableRecipeListSize(void);
    bool isTradeValid(float);
    void setCurrentRecipeIndex(int);
    void recipeChanged(void);
};
