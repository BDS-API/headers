#pragma once

#include "StructureStart.h"


class ShipwreckStart : public StructureStart {

public:
    virtual ~ShipwreckStart(); // _ZN14ShipwreckStartD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK14ShipwreckStart7getTypeEv
    ShipwreckStart(); // _ZN14ShipwreckStartC2Ev
    ShipwreckStart(BiomeSource &, Random &, int, int); // _ZN14ShipwreckStartC2ER11BiomeSourceR6Randomii
};
