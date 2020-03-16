#pragma once

#include <string>
#include "Item.h"


class CompassItem : public Item {

public:
    virtual ~CompassItem(); // _ZN11CompassItemD2Ev
    virtual void __fake_function0(); // fake
    virtual void getAnimationFrameFor(Mob *, bool, ItemStack const*, bool)const; // _ZNK11CompassItem20getAnimationFrameForEP3MobbPK9ItemStackb
    virtual void getIcon(ItemStackBase const&, int, bool)const; // _ZNK11CompassItem7getIconERK13ItemStackBaseib
    CompassItem(std::string const&, int); // _ZN11CompassItemC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
//    void populateFrames(long const&); //TODO: incomplete function definition // _ZN11CompassItem14populateFramesERKN2cg16ImageDescriptionE
};
