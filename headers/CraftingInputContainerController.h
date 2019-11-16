#pragma once

class CraftingInputContainerController : CraftingContainerController {

    virtual void ~CraftingInputContainerController();
    virtual void ~CraftingInputContainerController();
    virtual void ContainerController::isItemAllowed(ItemInstance const&)const;
    virtual void ContainerController::isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void ContainerController::isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void ContainerController::_canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void ContainerController::_getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void ContainerController::_getAvailableAddCount(int)const;
    virtual void ContainerController::_canRemove(int, int)const;
    virtual void ContainerController::_onItemChanged(int);
    virtual void onRecipeSelected(Recipe const*, bool, bool);
    virtual void getRecipeItem(int)const;
    virtual void clearSelectedRecipe(void);
    virtual void getSelectedRecipe(void)const;
    virtual void setGhostItem(ContainerItemStack const&, int, bool);
    virtual void getGhostItem(int)const;
}
