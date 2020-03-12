#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../item/ItemStack.h"
#include "ActorBlock.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include <vector>
#include "../level/Level.h"
#include "../util/Random.h"


class CauldronBlock : ActorBlock {

public:
    static long BASE_WATER_PIXEL;
    static long PIXEL_PER_LEVEL;

    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isInteractiveBlock()const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool canContainLiquid()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getExtraRenderLayers()const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool hasComparatorSignal()const;
    virtual void use(Player &, BlockPos const&)const;
    ~CauldronBlock();
    CauldronBlock(std::string const&, int);
    void updateShape(BlockSource &, BlockPos const&);
    void _useInventory(Player &, ItemStack &, ItemStack &, int)const;
//  void setLiquidLevel(BlockSource &, BlockPos const&, int, CauldronLiquidType)const; //TODO: incomplete function definition
    void spawnPotionParticles(Level &, Vec3 const&, Random &, int, int);
    void _explodeCauldronContents(BlockSource &, BlockPos const&, unsigned short)const;
    void spawnBubbleParticles(Level &, Vec3 const&, Random &, int, int);
    void getLiquidLevel(int)const;
    void spawnLavaParticles(Level &, Vec3 const&, Random &, int);
//  void _sendCauldronUsedEventToClient(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition
    void spawnSplashParticles(Level &, Vec3 const&, Random &, int, int);
//  void _spawnCauldronEvent(BlockSource &, BlockPos const&, LevelEvent)const; //TODO: incomplete function definition
    void _flushCauldronEvent(BlockSource &, BlockPos const&, int)const;
    void _decrementStack(ItemStack &)const;
};
