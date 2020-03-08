#pragma once

#include "../../crafting/recipe/Recipe"
#include "../model/ContainerModel"
#include "../../item/ItemInstance"


class CraftingOutputContainerController : CraftingContainerController {

public:
    CraftingOutputContainerController::~CraftingOutputContainerController()
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canRemove(int, int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe();

    CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
};
