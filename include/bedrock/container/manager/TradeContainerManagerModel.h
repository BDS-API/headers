#pragma once

#include <string>
#include "LevelContainerManagerModel.h"


class TradeContainerManagerModel : LevelContainerManagerModel {

public:
    ~TradeContainerManagerModel(); // _ZN26TradeContainerManagerModelD2Ev
    virtual void getItems(); // _ZN26TradeContainerManagerModel8getItemsEv
    virtual void setSlot(int, ContainerItemStack const&, bool); // _ZN26TradeContainerManagerModel7setSlotEiRK18ContainerItemStackb
    virtual void getSlot(int); // _ZN26TradeContainerManagerModel7getSlotEi
    virtual void init(); // _ZN26TradeContainerManagerModel4initEv
//  TradeContainerManagerModel(ContainerID, Player &, ActorUniqueID const&); //TODO: incomplete function definition // _ZN26TradeContainerManagerModelC2E11ContainerIDR6PlayerRK13ActorUniqueID
    void getEntity()const; // _ZNK26TradeContainerManagerModel9getEntityEv
    std::string getDisplayName(); // _ZN26TradeContainerManagerModel14getDisplayNameB5cxx11Ev
    void getCurrentRecipe(int); // _ZN26TradeContainerManagerModel16getCurrentRecipeEi
    void getAvailableRecipeListSize(); // _ZN26TradeContainerManagerModel26getAvailableRecipeListSizeEv
    bool isTradeValid(float); // _ZN26TradeContainerManagerModel12isTradeValidEf
    void setCurrentRecipeIndex(int); // _ZN26TradeContainerManagerModel21setCurrentRecipeIndexEi
    void recipeChanged(); // _ZN26TradeContainerManagerModel13recipeChangedEv
};
