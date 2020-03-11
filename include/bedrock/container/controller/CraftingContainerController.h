#pragma once

#include "../../../unmapped/ContainerItemStack.h"
#include <memory>
#include "../../crafting/recipe/Recipe.h"
#include "../model/ContainerModel.h"
#include "./ContainerController.h"


class CraftingContainerController : ContainerController {

public:
    virtual ~CraftingContainerController();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void clearSelectedRecipe();
    virtual void getSelectedRecipe()const;
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;

    CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
