#pragma once

#include "../../../unmapped/ContainerItemStack"
#include "../model/ContainerModel"
#include "../../crafting/recipe/Recipe"


class CraftingContainerController : ContainerController {

public:
    virtual CraftingContainerController::~CraftingContainerController();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void clearSelectedRecipe(void);
    virtual void getSelectedRecipe(void)const;
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;

    CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
