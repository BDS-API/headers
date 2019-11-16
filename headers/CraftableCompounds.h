#pragma once

class CraftableCompounds {

    virtual void ~CraftableCompounds();
    virtual void ~CraftableCompounds();
    virtual void _registerCompound(std::vector<ItemStack, std::allocator<ItemStack>> const&, ItemStack const&, LabTableReactionType, CompoundContainerType);
}
