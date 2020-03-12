#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../container/Container.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class TntBlock : BlockLegacy {

public:
    ~TntBlock();
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void dispense(BlockSource &, Container &, int, Vec3 const&, unsigned char)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void destroy(BlockSource &, BlockPos const&, Block const&, Actor *)const;
    virtual void shouldDispense(BlockSource &, Container &)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void onExploded(BlockSource &, BlockPos const&, Actor *)const;
    void _setAllowUnderwater(Actor *)const;
    void _shouldAllowUnderwater(Block const&)const;
    TntBlock(std::string const&, int);
};
