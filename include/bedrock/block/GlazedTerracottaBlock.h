#pragma once

#include "FaceDirectionalBlock.h"
#include <string>


class GlazedTerracottaBlock : public FaceDirectionalBlock {

public:
    virtual ~GlazedTerracottaBlock(); // _ZN21GlazedTerracottaBlockD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isValidAuxValue(int)const; // _ZNK21GlazedTerracottaBlock15isValidAuxValueEi
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK21GlazedTerracottaBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK21GlazedTerracottaBlock11getMapColorER11BlockSourceRK8BlockPos
    GlazedTerracottaBlock(std::string const&, int); // _ZN21GlazedTerracottaBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
};
