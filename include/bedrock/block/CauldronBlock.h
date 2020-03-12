#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class CauldronBlock : ActorBlock {

public:
    static long BASE_WATER_PIXEL;
    static long PIXEL_PER_LEVEL;

    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool canContainLiquid()const;
    ~CauldronBlock();
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const;
    virtual void handleRain(BlockSource &, BlockPos const&, float)const;
    virtual bool hasComparatorSignal()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isInteractiveBlock()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const;
    virtual void getExtraRenderLayers()const;
//  void _sendCauldronUsedEventToClient(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition
    void spawnBubbleParticles(Level &, Vec3 const&, Random &, int, int);
    void _flushCauldronEvent(BlockSource &, BlockPos const&, int)const;
//  void setLiquidLevel(BlockSource &, BlockPos const&, int, CauldronLiquidType)const; //TODO: incomplete function definition
    void spawnSplashParticles(Level &, Vec3 const&, Random &, int, int);
    void _explodeCauldronContents(BlockSource &, BlockPos const&, unsigned short)const;
    void _useInventory(Player &, ItemStack &, ItemStack &, int)const;
//  void _spawnCauldronEvent(BlockSource &, BlockPos const&, LevelEvent)const; //TODO: incomplete function definition
    void spawnLavaParticles(Level &, Vec3 const&, Random &, int);
    void getLiquidLevel(int)const;
    void updateShape(BlockSource &, BlockPos const&);
    void spawnPotionParticles(Level &, Vec3 const&, Random &, int, int);
    void _decrementStack(ItemStack &)const;
    CauldronBlock(std::string const&, int);
};
