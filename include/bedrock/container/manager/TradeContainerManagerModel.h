#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "../../actor/Player.h"
#include "./LevelContainerManagerModel.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include <string>


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    virtual ~TradeContainerManagerModel();
    virtual void getItems();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    virtual void getSlot(int);
    virtual void init();

//  TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void getEntity()const;
    std::string getDisplayName();
    void getCurrentRecipe(int);
    void getAvailableRecipeListSize();
    bool isTradeValid(float);
    void setCurrentRecipeIndex(int);
    void recipeChanged();
};
