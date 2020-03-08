#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"
#include "../util/Vec3"
#include "../container/Container"


class TntBlock : BlockLegacy {

public:
    virtual TntBlock::~TntBlock()
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;

    TntBlock(std::string const&, int);
    void _shouldAllowUnderwater(Block const&)const;
    void _setAllowUnderwater(Actor *)const;
};
