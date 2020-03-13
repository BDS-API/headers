#pragma once

#include <string>
#include "BlockLegacy.h"


class PumpkinBlock : BlockLegacy {

public:
    ~PumpkinBlock(); // _ZN12PumpkinBlockD2Ev
    virtual bool canConnect(Block const&, unsigned char, Block const&)const; // _ZNK12PumpkinBlock10canConnectERK5BlockhS2_
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const; // _ZNK12PumpkinBlock8dispenseER11BlockSourceR9ContaineriRK4Vec3h
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12PumpkinBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK12PumpkinBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12PumpkinBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK12PumpkinBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getVariant(Block const&)const; // _ZNK12PumpkinBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK12PumpkinBlock13getMappedFaceEhRK5Block
    PumpkinBlock(std::string const&, int, bool, bool); // _ZN12PumpkinBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEibb
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const; // _ZNK12PumpkinBlock12_canDispenseER11BlockSourceRK4Vec3h
    void _golemPumpkinTester(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12PumpkinBlock19_golemPumpkinTesterER11BlockSourceRK8BlockPosRK5Block
    void _canSpawnGolem(BlockSource &, BlockPos const&)const; // _ZNK12PumpkinBlock14_canSpawnGolemER11BlockSourceRK8BlockPos
};
