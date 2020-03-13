#pragma once

#include <string>
#include "Item.h"


class CompassItem : Item {

public:
    ~CompassItem(); // _ZN11CompassItemD2Ev
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK11CompassItem20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK11CompassItem7getIconERK13ItemStackBaseib
    CompassItem(std::string const&, int); // _ZN11CompassItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//  void populateFrames(cg::ImageDescription const&); //TODO: incomplete function definition // _ZN11CompassItem14populateFramesERKN2cg16ImageDescriptionE
};
