#pragma once

#include <memory>
#include "CraftingContainerController.h"


class CraftingInputContainerController : CraftingContainerController {

public:
    virtual void clearSelectedRecipe();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    ~CraftingInputContainerController();
    virtual void getBackgroundStyle(int)const;
    CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
