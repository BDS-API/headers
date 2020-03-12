#pragma once

#include "CraftingContainerController.h"
#include "../../item/ItemInstance.h"
#include <memory>
#include "../../crafting/recipe/Recipe.h"
#include "../model/ContainerModel.h"


class CraftingOutputContainerController : CraftingContainerController {

public:
    virtual void getRecipeItem(int)const;
    virtual void getBackgroundStyle(int)const;
    virtual void clearSelectedRecipe();
    ~CraftingOutputContainerController();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void _canRemove(int, int)const;
    virtual bool isItemAllowed(ItemInstance const&)const;
    CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
};
