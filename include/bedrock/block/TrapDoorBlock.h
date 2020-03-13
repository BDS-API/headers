#pragma once

#include <string>
#include "BlockLegacy.h"


class TrapDoorBlock : BlockLegacy {

public:
    ~TrapDoorBlock(); // _ZN13TrapDoorBlockD2Ev
    virtual bool isInteractiveBlock()const; // _ZNK13TrapDoorBlock18isInteractiveBlockEv
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13TrapDoorBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK13TrapDoorBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK13TrapDoorBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK13TrapDoorBlock16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13TrapDoorBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13TrapDoorBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK13TrapDoorBlock3useER6PlayerRK8BlockPos
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK13TrapDoorBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getVisualShape(Block const&, AABB &, bool)const; // _ZNK13TrapDoorBlock14getVisualShapeERK5BlockR4AABBb
    virtual bool canBeSilkTouched()const; // _ZNK13TrapDoorBlock16canBeSilkTouchedEv
    TrapDoorBlock(std::string const&, int, Material const&); // _ZN13TrapDoorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
    void _toggleOpen(BlockSource &, Actor *, BlockPos const&)const; // _ZNK13TrapDoorBlock11_toggleOpenER11BlockSourceP5ActorRK8BlockPos
    void setOpen(BlockSource &, BlockPos const&, bool)const; // _ZNK13TrapDoorBlock7setOpenER11BlockSourceRK8BlockPosb
};
