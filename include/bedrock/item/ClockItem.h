#pragma once

#include <string>
#include "Item.h"


class ClockItem : Item {

public:
    ~ClockItem(); // _ZN9ClockItemD2Ev
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK9ClockItem20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK9ClockItem7getIconERK13ItemStackBaseib
    ClockItem(std::string const&, int); // _ZN9ClockItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition // _ZN9ClockItem14populateFramesERKN2cg16ImageDescriptionE
};
