#pragma once

class ItemInstance : ItemStackBase {

    virtual void ~ItemInstance();
    virtual void ~ItemInstance();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
