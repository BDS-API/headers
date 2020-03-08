#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../../crafting/recipe/Recipe"
#include "../model/ContainerModel"


class CraftingContainerController : ContainerController {

public:
    virtual CraftingContainerController::~CraftingContainerController()
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void clearSelectedRecipe();
    virtual void getSelectedRecipe()const;
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;

    CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
