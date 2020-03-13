#pragma once

#include <string>
#include "BlockLegacy.h"


class GrassBlock : BlockLegacy {

public:
    static long MIN_BRIGHTNESS;

    ~GrassBlock(); // _ZN10GrassBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK10GrassBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeOriginalSurface()const; // _ZNK10GrassBlock20canBeOriginalSurfaceEv
    virtual void waterSpreadCausesSpawn()const; // _ZNK10GrassBlock22waterSpreadCausesSpawnEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK10GrassBlock12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK10GrassBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK10GrassBlock15getResourceItemER6RandomRK5Blocki
    virtual void calcVariant(BlockSource &, BlockPos const&)const; // _ZNK10GrassBlock11calcVariantER11BlockSourceRK8BlockPos
    virtual void getMapColor(BlockSource &, BlockPos const&)const; // _ZNK10GrassBlock11getMapColorER11BlockSourceRK8BlockPos
    virtual void getColor(Block const&)const; // _ZNK10GrassBlock8getColorERK5Block
    virtual void getColor(BlockSource &, BlockPos const&, Block const&)const; // _ZNK10GrassBlock8getColorER11BlockSourceRK8BlockPosRK5Block
    GrassBlock(std::string const&, int); // _ZN10GrassBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getGrassSide(int)const; // _ZNK10GrassBlock13_getGrassSideEi
    void _canBeGrass(BlockSource const&, BlockPos const&)const; // _ZNK10GrassBlock11_canBeGrassERK11BlockSourceRK8BlockPos
    void _randomWalk(BlockSource &, BlockPos &, int)const; // _ZNK10GrassBlock11_randomWalkER11BlockSourceR8BlockPosi
    void _translucencyAllowsGrass(Material const&)const; // _ZNK10GrassBlock24_translucencyAllowsGrassERK8Material
    void _isGrowthBlockingSolidBlock(Block const&, Material const&)const; // _ZNK10GrassBlock27_isGrowthBlockingSolidBlockERK5BlockRK8Material
    void _isGrowthBlockingStairBlock(Block const&)const; // _ZNK10GrassBlock27_isGrowthBlockingStairBlockERK5Block
    void _isGrowthBlockingHalfSlabBlock(Block const&)const; // _ZNK10GrassBlock30_isGrowthBlockingHalfSlabBlockERK5Block
};
