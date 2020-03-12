#pragma once

#include <string>
#include "LevelContainerManagerModel.h"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    virtual void init();
    virtual void getItems();
    virtual void getSlot(int);
    ~TradeContainerManagerModel();
    virtual void setSlot(int, ContainerItemStack const&, bool);
    void getCurrentRecipe(int);
    bool isTradeValid(float);
    std::string getDisplayName();
    void recipeChanged();
//  TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition
    void getAvailableRecipeListSize();
    void setCurrentRecipeIndex(int);
    void getEntity()const;
};
