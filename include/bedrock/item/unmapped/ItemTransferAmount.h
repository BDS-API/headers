#pragma once



class ItemTransferAmount {

public:
    void fromMaxStackSize()const;
    ItemTransferAmount(ItemTransferAmount const&, bool);
    ItemTransferAmount(int);
//  ItemTransferAmount(ItemTakeType); //TODO: incomplete function definition
//  ItemTransferAmount(ItemPlaceType); //TODO: incomplete function definition
};
