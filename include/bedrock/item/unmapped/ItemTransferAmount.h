#pragma once



class ItemTransferAmount {

public:
    ItemTransferAmount(int); // _ZN18ItemTransferAmountC2Ei
//  ItemTransferAmount(ItemTakeType); //TODO: incomplete function definition // _ZN18ItemTransferAmountC2E12ItemTakeType
//  ItemTransferAmount(ItemPlaceType); //TODO: incomplete function definition // _ZN18ItemTransferAmountC2E13ItemPlaceType
    ItemTransferAmount(ItemTransferAmount const&, bool); // _ZN18ItemTransferAmountC2ERKS_b
    void fromMaxStackSize()const; // _ZNK18ItemTransferAmount16fromMaxStackSizeEv
};
