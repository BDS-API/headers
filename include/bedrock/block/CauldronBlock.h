#pragma once

#include <string>
#include "ActorBlock.h"
#include <vector>


class CauldronBlock : ActorBlock {

public:
    static long BASE_WATER_PIXEL;
    static long PIXEL_PER_LEVEL;

    ~CauldronBlock(); // _ZN13CauldronBlockD2Ev
    virtual void addAABBs(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &)const; // _ZNK13CauldronBlock8addAABBsERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EE
    virtual void addCollisionShapes(Block const&, BlockSource &, BlockPos const&, AABB const*, std::vector<AABB> &, Actor *)const; // _ZNK13CauldronBlock18addCollisionShapesERK5BlockR11BlockSourceRK8BlockPosPK4AABBRSt6vectorIS8_SaIS8_EEP5Actor
//  virtual bool canProvideSupport(Block const&, unsigned char, BlockSupportType)const; //TODO: incomplete function definition // _ZNK13CauldronBlock17canProvideSupportERK5Blockh16BlockSupportType
    virtual bool isInteractiveBlock()const; // _ZNK13CauldronBlock18isInteractiveBlockEv
    virtual bool canContainLiquid()const; // _ZNK13CauldronBlock16canContainLiquidEv
    virtual void handleRain(BlockSource &, BlockPos const&, float)const; // _ZNK13CauldronBlock10handleRainER11BlockSourceRK8BlockPosf
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13CauldronBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13CauldronBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13CauldronBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13CauldronBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK13CauldronBlock3useER6PlayerRK8BlockPos
    virtual void handleEntityInside(BlockSource &, BlockPos const&, Actor *, Vec3 &)const; // _ZNK13CauldronBlock18handleEntityInsideER11BlockSourceRK8BlockPosP5ActorR4Vec3
    virtual bool hasComparatorSignal()const; // _ZNK13CauldronBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK13CauldronBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getExtraRenderLayers()const; // _ZNK13CauldronBlock20getExtraRenderLayersEv
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13CauldronBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK13CauldronBlock24getSilkTouchItemInstanceERK5Block
    CauldronBlock(std::string const&, int); // _ZN13CauldronBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void updateShape(BlockSource &, BlockPos const&); // _ZN13CauldronBlock11updateShapeER11BlockSourceRK8BlockPos
//  void setLiquidLevel(BlockSource &, BlockPos const&, int, CauldronLiquidType)const; //TODO: incomplete function definition // _ZNK13CauldronBlock14setLiquidLevelER11BlockSourceRK8BlockPosi18CauldronLiquidType
//  void _spawnCauldronEvent(BlockSource &, BlockPos const&, LevelEvent)const; //TODO: incomplete function definition // _ZNK13CauldronBlock19_spawnCauldronEventER11BlockSourceRK8BlockPos10LevelEvent
    void _useInventory(Player &, ItemStack &, ItemStack &, int)const; // _ZNK13CauldronBlock13_useInventoryER6PlayerR9ItemStackS3_i
    void _explodeCauldronContents(BlockSource &, BlockPos const&, unsigned short)const; // _ZNK13CauldronBlock24_explodeCauldronContentsER11BlockSourceRK8BlockPost
//  void _sendCauldronUsedEventToClient(Player const&, short, MinecraftEventing::POIBlockInteractionType)const; //TODO: incomplete function definition // _ZNK13CauldronBlock30_sendCauldronUsedEventToClientERK6PlayersN17MinecraftEventing23POIBlockInteractionTypeE
    void _decrementStack(ItemStack &)const; // _ZNK13CauldronBlock15_decrementStackER9ItemStack
    void getLiquidLevel(int)const; // _ZNK13CauldronBlock14getLiquidLevelEi
    void _flushCauldronEvent(BlockSource &, BlockPos const&, int)const; // _ZNK13CauldronBlock19_flushCauldronEventER11BlockSourceRK8BlockPosi
    void spawnPotionParticles(Level &, Vec3 const&, Random &, int, int); // _ZN13CauldronBlock20spawnPotionParticlesER5LevelRK4Vec3R6Randomii
    void spawnLavaParticles(Level &, Vec3 const&, Random &, int); // _ZN13CauldronBlock18spawnLavaParticlesER5LevelRK4Vec3R6Randomi
    void spawnSplashParticles(Level &, Vec3 const&, Random &, int, int); // _ZN13CauldronBlock20spawnSplashParticlesER5LevelRK4Vec3R6Randomii
    void spawnBubbleParticles(Level &, Vec3 const&, Random &, int, int); // _ZN13CauldronBlock20spawnBubbleParticlesER5LevelRK4Vec3R6Randomii
};
