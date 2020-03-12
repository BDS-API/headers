#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "LevelContainerManagerModel.h"
#include "../../actor/Player.h"
#include "../../../unmapped/ContainerItemStack.h"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    ~TradeContainerManagerModel();
    virtual void getSlot(int);
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void init();
    bool isTradeValid(float);
    void setCurrentRecipeIndex(int);
    void getEntity()const;
    void getAvailableRecipeListSize();
    void recipeChanged();
    std::string getDisplayName();
//  TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void getCurrentRecipe(int);
};
