#pragma once

#include <string>
#include "BlockLegacy.h"


class TntBlock : BlockLegacy {

public:
    virtual void getVariant(Block const&)const;
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~TntBlock();
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isAuxValueRelevantForPicking()const;
    void _shouldAllowUnderwater(Block const&)const;
    void _setAllowUnderwater(Actor *)const;
    TntBlock(std::string const&, int);
};
