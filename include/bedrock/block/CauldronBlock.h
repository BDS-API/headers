#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../item/ItemStack.h"
#include <memory>
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../level/Level.h"
#include "../actor/Actor.h"
#include <vector>
#include "../util/Vec3.h"
#include "../util/AABB.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class CauldronBlock : ActorBlock {

public:
    static long BASE_WATER_PIXEL;
    static long PIXEL_PER_LEVEL;

    virtual ~CauldronBlock();
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB, std::allocator<AABB>> &, Actor *)const;
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual bool isInteractiveBlock()const;
    virtual bool canContainLiquid()const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getExtraRenderLayers()const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    CauldronBlock(std::string const&, int);
    void updateShape(BlockSource &, BlockPos const&);
//  void setLiquidLevel(BlockSource &, BlockPos const&, int, CauldronLiquidType)const; //TODO: incomplete function definition
//  void _spawnCauldronEvent(BlockSource &, BlockPos const&, LevelEvent)const; //TODO: incomplete function definition
    void _useInventory(Player &, ItemStack &, ItemStack &, int)const;
    void _explodeCauldronContents(BlockSource &, BlockPos const&, unsigned short)const;
//  void _sendCauldronUsedEventToClient(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition
    void _decrementStack(ItemStack &)const;
    void getLiquidLevel(int)const;
    void _flushCauldronEvent(BlockSource &, BlockPos const&, int)const;
    void spawnPotionParticles(Level &, Vec3 const&, Random &, int, int);
    void spawnLavaParticles(Level &, Vec3 const&, Random &, int);
    void spawnSplashParticles(Level &, Vec3 const&, Random &, int, int);
    void spawnBubbleParticles(Level &, Vec3 const&, Random &, int, int);
};
