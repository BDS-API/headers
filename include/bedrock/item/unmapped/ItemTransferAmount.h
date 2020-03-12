#pragma once



class ItemTransferAmount {

public:
    ItemTransferAmount(ItemTransferAmount const&, bool);
    void fromMaxStackSize()const;
//  ItemTransferAmount(ItemPlaceType); //TODO: incomplete function definition
    ItemTransferAmount(int);
//  ItemTransferAmount(ItemTakeType); //TODO: incomplete function definition
};
