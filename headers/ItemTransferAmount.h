#pragma once

class ItemTransferAmount {

public:

    void ItemTransferAmount(int);
    void ItemTransferAmount(ItemTakeType);
    void ItemTransferAmount(ItemPlaceType);
    void ItemTransferAmount(ItemTransferAmount const&, bool);
    void fromMaxStackSize(void)const;
};
