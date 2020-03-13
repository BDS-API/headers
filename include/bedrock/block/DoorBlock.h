#pragma once

#include <string>
#include "BlockLegacy.h"


class DoorBlock : BlockLegacy {

public:
    ~DoorBlock(); // _ZN9DoorBlockD2Ev
    virtual void getNextBlockPermutation(Block const&)const; // _ZNK9DoorBlock23getNextBlockPermutationERK5Block
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK9DoorBlock7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void getLiquidClipVolume(BlockSource &, BlockPos const&, AABB &)const; // _ZNK9DoorBlock19getLiquidClipVolumeER11BlockSourceRK8BlockPosR4AABB
    virtual bool isInteractiveBlock()const; // _ZNK9DoorBlock18isInteractiveBlockEv
    virtual bool isDoorBlock()const; // _ZNK9DoorBlock11isDoorBlockEv
    virtual void onFillBlock(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9DoorBlock11onFillBlockER11BlockSourceRK8BlockPosRK5Block
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const; // _ZNK9DoorBlock15checkIsPathableER5ActorRK8BlockPosS4_
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const; // _ZNK9DoorBlock16onRedstoneUpdateER11BlockSourceRK8BlockPosib
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK9DoorBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getSecondPart(BlockSource &, BlockPos const&, BlockPos &)const; // _ZNK9DoorBlock13getSecondPartER11BlockSourceRK8BlockPosRS2_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK9DoorBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK9DoorBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK9DoorBlock3useER6PlayerRK8BlockPos
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const; // _ZNK9DoorBlock21getVisualShapeInWorldERK5BlockR11BlockSourceRK8BlockPosR4AABBb
    virtual void getVariant(Block const&)const; // _ZNK9DoorBlock10getVariantERK5Block
    virtual bool canBeSilkTouched()const; // _ZNK9DoorBlock16canBeSilkTouchedEv
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK9DoorBlock24getSilkTouchItemInstanceERK5Block
//  DoorBlock(std::string const&, int, Material const&, DoorBlock::DoorType); //TODO: incomplete function definition // _ZN9DoorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8MaterialNS_8DoorTypeE
    bool hasRightHinge(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock13hasRightHingeER11BlockSourceRK8BlockPos
    void getDoorBlocks(BlockSource &, BlockPos const&, Block const**, Block const**)const; // _ZNK9DoorBlock13getDoorBlocksER11BlockSourceRK8BlockPosPPK5BlockS8_
    void getDoorThickness()const; // _ZNK9DoorBlock16getDoorThicknessEv
    void getBlockedDirection(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock19getBlockedDirectionER11BlockSourceRK8BlockPos
    bool isToggled(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock9isToggledER11BlockSourceRK8BlockPos
    void setToggled(BlockSource &, BlockPos const&, bool)const; // _ZNK9DoorBlock10setToggledER11BlockSourceRK8BlockPosb
    void getDir(BlockSource &, BlockPos const&)const; // _ZNK9DoorBlock6getDirER11BlockSourceRK8BlockPos
    void getDoorPosition(BlockSource &, BlockPos const&, BlockPos &, BlockPos &)const; // _ZNK9DoorBlock15getDoorPositionER11BlockSourceRK8BlockPosRS2_S5_
//  void _isPlaceable(BlockPos const&, unsigned char, BlockSupportType, BlockSource &)const; //TODO: incomplete function definition // _ZNK9DoorBlock12_isPlaceableERK8BlockPosh16BlockSupportTypeR11BlockSource
    void shouldFlipTexture(BlockSource &, BlockPos const&, unsigned char)const; // _ZNK9DoorBlock17shouldFlipTextureER11BlockSourceRK8BlockPosh
    void getDoorFacing(int); // _ZN9DoorBlock13getDoorFacingEi
};
