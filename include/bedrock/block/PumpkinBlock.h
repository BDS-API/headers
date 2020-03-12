#pragma once

#include <string>
#include "BlockLegacy.h"


class PumpkinBlock : BlockLegacy {

public:
    ~PumpkinBlock();
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    void _golemPumpkinTester(BlockSource &, BlockPos const&, Block const&)const;
    PumpkinBlock(std::string const&, int, bool, bool);
    void _canSpawnGolem(BlockSource &, BlockPos const&)const;
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
};
