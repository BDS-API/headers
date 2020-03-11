#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../container/Container.h"
#include "./BlockLegacy.h"


class PumpkinBlock : BlockLegacy {

public:
    virtual ~PumpkinBlock();
    virtual bool canConnect(Block const&, unsigned char, Block const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    PumpkinBlock(std::string const&, int, bool, bool);
    void _canDispense(BlockSource &, Vec3 const&, unsigned char)const;
    void _golemPumpkinTester(BlockSource &, BlockPos const&, Block const&)const;
    void _canSpawnGolem(BlockSource &, BlockPos const&)const;
};
