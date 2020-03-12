#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ButtonBlock : BlockLegacy {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~ButtonBlock();
    virtual void getUIShape(Block const&, AABB &)const;
    virtual bool canSpawnOn()const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getCollisionShape(AABB &, Block const&, BlockSource &, BlockPos const&, Actor *)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getVariant(Block const&)const;
    virtual bool isAttachedTo(BlockSource &, BlockPos const&, BlockPos &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual bool isButtonBlock()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool isSignalSource()const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool isInteractiveBlock()const;
    void _buttonPressed(BlockSource &, Block const&, Vec3 const&)const;
    void _checkPressed(BlockSource &, BlockPos const&)const;
    void _getShape(AABB &, bool, unsigned char, bool)const;
    void _checkCanSurvive(BlockSource &, BlockPos const&)const;
    bool canAttachTo(BlockSource &, BlockPos const&, unsigned char);
    ButtonBlock(std::string const&, int, Material const&, bool);
    void _buttonUnpressed(BlockSource &, Block const&, Vec3 const&)const;
    void getTickDelay()const;
};
