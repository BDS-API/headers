#pragma once

#include "./ItemTransferAmount.h"


class ItemTransferAmount {

public:

    ItemTransferAmount(int);
//  ItemTransferAmount(ItemTakeType); //TODO: incomplete function definition
//  ItemTransferAmount(ItemPlaceType); //TODO: incomplete function definition
    ItemTransferAmount(ItemTransferAmount const&, bool);
    void fromMaxStackSize()const;
};
