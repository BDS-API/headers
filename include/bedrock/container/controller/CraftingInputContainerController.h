#pragma once

#include "../../crafting/recipe/Recipe"
#include "../model/ContainerModel"


class CraftingInputContainerController : CraftingContainerController {

public:
    virtual CraftingInputContainerController::~CraftingInputContainerController()
    virtual void getBackgroundStyle(int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe();

    CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
