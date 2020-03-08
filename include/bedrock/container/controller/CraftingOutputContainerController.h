#pragma once

#include "../../item/ItemInstance"
#include "../model/ContainerModel"
#include "../../crafting/recipe/Recipe"


class CraftingOutputContainerController : CraftingContainerController {

public:
    virtual CraftingOutputContainerController::~CraftingOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canRemove(int, int)const;
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe(void);

    CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
};
