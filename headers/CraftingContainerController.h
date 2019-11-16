#pragma once

class CraftingContainerController : ContainerController {

    virtual void Crafting~CraftingContainerController();
    virtual void Crafting~CraftingContainerController();
    virtual void isItemAllowed(ItemInstance const&)const;
    virtual void isItemAllowedAtSlot(ContainerItemStack const&, int)const;
    virtual void isItemFiltered(Recipes const&, ContainerItemStack const&)const;
    virtual void getBackgroundStyle(int)const;
    virtual void _canSet(int, ContainerItemStack const&, ItemTransferAmount)const;
    virtual void _getAvailableSetCount(int, ContainerItemStack const&)const;
    virtual void _getAvailableAddCount(int)const;
    virtual void _canRemove(int, int)const;
    virtual void _onItemChanged(int);
    virtual void CraftingonRecipeSelected(Recipe const*, bool, bool);
    virtual void CraftinggetRecipeItem(int)const;
    virtual void CraftingclearSelectedRecipe(void);
    virtual void CraftinggetSelectedRecipe(void)const;
    virtual void CraftingsetGhostItem(ContainerItemStack const&, int, bool);
    virtual void CraftinggetGhostItem(int)const;
}
