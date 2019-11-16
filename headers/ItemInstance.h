#pragma once

class ItemInstance : ItemStackBase {

    virtual ~ItemInstance();
    virtual ~ItemInstance();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
