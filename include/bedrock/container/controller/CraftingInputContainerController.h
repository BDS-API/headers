#pragma once

#include "../../crafting/recipe/Recipe.h"
#include "../model/ContainerModel.h"
#include "CraftingContainerController.h"
#include <memory>


class CraftingInputContainerController : CraftingContainerController {

public:
    virtual void getBackgroundStyle(int)const;
    ~CraftingInputContainerController();
    virtual void clearSelectedRecipe();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
