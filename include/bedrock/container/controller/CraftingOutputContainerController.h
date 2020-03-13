#pragma once

#include <memory>
#include "CraftingContainerController.h"


class CraftingOutputContainerController : CraftingContainerController {

public:
    ~CraftingOutputContainerController(); // _ZN33CraftingOutputContainerControllerD2Ev
    virtual bool isItemAllowed(ItemInstance const&)const; // _ZNK33CraftingOutputContainerController13isItemAllowedERK12ItemInstance
    virtual void getBackgroundStyle(int)const; // _ZNK33CraftingOutputContainerController18getBackgroundStyleEi
    virtual void _canRemove(int, int)const; // _ZNK33CraftingOutputContainerController10_canRemoveEii
    virtual void onRecipeSelected(Recipe const*, bool, bool); // _ZN33CraftingOutputContainerController16onRecipeSelectedEPK6Recipebb
    virtual void getRecipeItem(int)const; // _ZNK33CraftingOutputContainerController13getRecipeItemEi
    virtual void clearSelectedRecipe(); // _ZN33CraftingOutputContainerController19clearSelectedRecipeEv
    CraftingOutputContainerController(std::shared_ptr<ContainerModel>); // _ZN33CraftingOutputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
