#pragma once

class ItemStack : ItemStackBase {

    virtual ~ItemStack();
    virtual ~ItemStack();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
