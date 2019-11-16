#pragma once

class ItemStackBase {

    virtual ~ItemStackBase();
    virtual ~ItemStackBase();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
