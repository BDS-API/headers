#pragma once

#include <memory>
#include "ContainerController.h"


class CraftingContainerController : ContainerController {

public:
    virtual void getGhostItem(int)const;
    virtual void getSelectedRecipe()const;
    virtual void clearSelectedRecipe();
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    ~CraftingContainerController();
    CraftingContainerController(std::shared_ptr<ContainerModel>, bool);
};
