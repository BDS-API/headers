#pragma once

#include <string>
#include "BushBlock.h"


class Sapling : BushBlock {

public:
    ~Sapling(); // _ZN7SaplingD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK7Sapling4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool canContainLiquid()const; // _ZNK7Sapling16canContainLiquidEv
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition // _ZNK7Sapling12onFertilizedER11BlockSourceRK8BlockPosP5Actor14FertilizerType
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK7Sapling8mayPlaceER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK7Sapling15getResourceItemER6RandomRK5Blocki
    virtual void getRenderLayer()const; // _ZNK7Sapling14getRenderLayerEv
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK7Sapling18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK7Sapling28isAuxValueRelevantForPickingEv
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const; // _ZNK7Sapling14getRenderLayerERK5BlockR11BlockSourceRK8BlockPos
    virtual void getVariant(Block const&)const; // _ZNK7Sapling10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK7Sapling24getSilkTouchItemInstanceERK5Block
    Sapling(std::string const&, int); // _ZN7SaplingC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void growTree(BlockSource &, BlockPos const&, Random &, Actor *)const; // _ZNK7Sapling8growTreeER11BlockSourceRK8BlockPosR6RandomP5Actor
    void advanceTree(BlockSource &, BlockPos const&, Random &, Actor *)const; // _ZNK7Sapling11advanceTreeER11BlockSourceRK8BlockPosR6RandomP5Actor
//  bool isSapling(BlockSource &, BlockPos const&, SaplingType)const; //TODO: incomplete function definition // _ZNK7Sapling9isSaplingER11BlockSourceRK8BlockPos11SaplingType
    void generateRedwoodTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const; // _ZNK7Sapling19generateRedwoodTreeERiS0_RbRK8BlockPosR11BlockSourceP5Actor
    void generateJungleTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const; // _ZNK7Sapling18generateJungleTreeERiS0_RbRK8BlockPosR11BlockSourceP5Actor
    void generateRoofTree(int &, int &, bool &, BlockPos const&, BlockSource &, Actor *)const; // _ZNK7Sapling16generateRoofTreeERiS0_RbRK8BlockPosR11BlockSourceP5Actor
    void _getRenderLayerImpl()const; // _ZNK7Sapling19_getRenderLayerImplEv
};
