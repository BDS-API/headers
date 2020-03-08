#pragma once

#include "../model/ContainerModel"
#include "../../crafting/recipe/Recipe"


class CraftingInputContainerController : CraftingContainerController {

public:
    virtual CraftingInputContainerController::~CraftingInputContainerController();
    virtual void getBackgroundStyle(int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe(void);

    CraftingInputContainerController(std::shared_ptr<ContainerModel>);
};
