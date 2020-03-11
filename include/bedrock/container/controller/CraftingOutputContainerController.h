#pragma once

#include "./CraftingContainerController.h"
#include <memory>
#include "../../crafting/recipe/Recipe.h"
#include "../model/ContainerModel.h"
#include "../../item/ItemInstance.h"


class CraftingOutputContainerController : CraftingContainerController {

public:
    virtual ~CraftingOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canRemove(int, int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe();

    CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
};
