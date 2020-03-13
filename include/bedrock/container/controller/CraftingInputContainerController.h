#pragma once

#include <memory>
#include "CraftingContainerController.h"


class CraftingInputContainerController : CraftingContainerController {

public:
    ~CraftingInputContainerController(); // _ZN32CraftingInputContainerControllerD2Ev
    virtual void getBackgroundStyle(int)const; // _ZNK32CraftingInputContainerController18getBackgroundStyleEi
    virtual void onRecipeSelected(Recipe const*, bool, bool); // _ZN32CraftingInputContainerController16onRecipeSelectedEPK6Recipebb
    virtual void getRecipeItem(int)const; // _ZNK32CraftingInputContainerController13getRecipeItemEi
    virtual void clearSelectedRecipe(); // _ZN32CraftingInputContainerController19clearSelectedRecipeEv
    CraftingInputContainerController(std::shared_ptr<ContainerModel>); // _ZN32CraftingInputContainerControllerC2ESt10shared_ptrI14ContainerModelE
};
