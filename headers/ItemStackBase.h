#pragma once

class ItemStackBase {

    virtual void ~ItemStackBase();
    virtual void ~ItemStackBase();
    virtual void reinit(Item const&, int, int);
    virtual void reinit(BlockLegacy const&, int);
}
