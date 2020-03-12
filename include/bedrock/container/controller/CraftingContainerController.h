#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include "ContainerController.h"
#include <memory>
#include "../../crafting/recipe/Recipe.h"
#include "../model/ContainerModel.h"


class CraftingContainerController : ContainerController {

public:
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;
    ~CraftingContainerController();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void clearSelectedRecipe();
    virtual void getSelectedRecipe()const;
    CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
