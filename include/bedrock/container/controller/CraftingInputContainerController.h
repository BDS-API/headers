#pragma once

#include "../model/ContainerModel.h"
#include <memory>
#include "./CraftingContainerController.h"
#include "../../crafting/recipe/Recipe.h"


class CraftingInputContainerController : CraftingContainerController {

public:
    virtual ~CraftingInputContainerController();
    virtual void getBackgroundStyle(int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe();

    CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
