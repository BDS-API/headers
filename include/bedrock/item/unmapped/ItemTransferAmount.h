#pragma once



class ItemTransferAmount {

public:

    ItemTransferAmount(int);
    ItemTransferAmount(ItemTakeType);
    ItemTransferAmount(ItemPlaceType);
    ItemTransferAmount(ItemTransferAmount const&, bool);
    void fromMaxStackSize()const;
};
