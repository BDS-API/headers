#pragma once

#include <memory>
#include "ContainerController.h"


class CraftingContainerController : ContainerController {

public:
    ~CraftingContainerController(); // _ZN27CraftingContainerControllerD2Ev
    virtual void onRecipeSelected(Recipe const*, bool, bool); // _ZN27CraftingContainerController16onRecipeSelectedEPK6Recipebb
    virtual void clearSelectedRecipe(); // _ZN27CraftingContainerController19clearSelectedRecipeEv
    virtual void getSelectedRecipe()const; // _ZNK27CraftingContainerController17getSelectedRecipeEv
    virtual void setGhostItem(ContainerItemStack const&, int, bool); // _ZN27CraftingContainerController12setGhostItemERK18ContainerItemStackib
    virtual void getGhostItem(int)const; // _ZNK27CraftingContainerController12getGhostItemEi
    CraftingContainerController(std::shared_ptr<ContainerModel>, bool); // _ZN27CraftingContainerControllerC2ESt10shared_ptrI14ContainerModelEb
};
