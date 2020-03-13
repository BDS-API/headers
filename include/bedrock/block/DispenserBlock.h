#pragma once

#include <string>
#include "ActorBlock.h"


class DispenserBlock : ActorBlock {

public:
    ~DispenserBlock(); // _ZN14DispenserBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK14DispenserBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isContainerBlock()const; // _ZNK14DispenserBlock16isContainerBlockEv
    virtual bool isInteractiveBlock()const; // _ZNK14DispenserBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK14DispenserBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK14DispenserBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK14DispenserBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK14DispenserBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK14DispenserBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK14DispenserBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK14DispenserBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK14DispenserBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual bool hasComparatorSignal()const; // _ZNK14DispenserBlock19hasComparatorSignalEv
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const; // _ZNK14DispenserBlock19getComparatorSignalER11BlockSourceRK8BlockPosRK5Blockh
    virtual void getVariant(Block const&)const; // _ZNK14DispenserBlock10getVariantERK5Block
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK14DispenserBlock13getMappedFaceEhRK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK14DispenserBlock24getSilkTouchItemInstanceERK5Block
    virtual void getTickDelay()const; // _ZNK14DispenserBlock12getTickDelayEv
    virtual void dispenseFrom(BlockSource &, BlockPos const&)const; // _ZNK14DispenserBlock12dispenseFromER11BlockSourceRK8BlockPos
    DispenserBlock(std::string const&, int); // _ZN14DispenserBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getDispensePosition(BlockSource &, Vec3 const&)const; // _ZNK14DispenserBlock19getDispensePositionER11BlockSourceRK4Vec3
    void getFacing(Block const&)const; // _ZNK14DispenserBlock9getFacingERK5Block
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&, Container &, int)const; // _ZNK14DispenserBlock9ejectItemER11BlockSourceRK4Vec3hRK9ItemStackR9Containeri
    void ejectItem(BlockSource &, Vec3 const&, unsigned char, ItemStack const&); // _ZN14DispenserBlock9ejectItemER11BlockSourceRK4Vec3hRK9ItemStack
    void recalcLockDir(BlockSource &, BlockPos const&); // _ZN14DispenserBlock13recalcLockDirER11BlockSourceRK8BlockPos
};
