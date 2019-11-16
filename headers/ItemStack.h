#pragma once

class ItemStack : ItemStackBase {

    virtual void ~ItemStack();
    virtual void ~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
