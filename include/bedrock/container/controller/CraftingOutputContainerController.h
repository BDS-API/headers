#pragma once

#include <memory>
#include "CraftingContainerController.h"


class CraftingOutputContainerController : CraftingContainerController {

public:
    virtual void _canRemove(int, int)const;
    ~CraftingOutputContainerController();
    virtual bool isItemAllowed(ItemInstance const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe();
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    CraftingOutputContainerController(std::shared_ptr<ContainerModel>);
};
