#pragma once

#include <string>
#include "DiodeBlock.h"


class RepeaterBlock : DiodeBlock {

public:
    static long DELAY_RENDER_OFFSETS;
    static long DELAYS;

    ~RepeaterBlock(); // _ZN13RepeaterBlockD2Ev
    virtual void tick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13RepeaterBlock4tickER11BlockSourceRK8BlockPosR6Random
    virtual bool isInteractiveBlock()const; // _ZNK13RepeaterBlock18isInteractiveBlockEv
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const; // _ZNK13RepeaterBlock23shouldConnectToRedstoneER11BlockSourceRK8BlockPosi
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock7onPlaceER11BlockSourceRK8BlockPos
    virtual void onRemove(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock8onRemoveER11BlockSourceRK8BlockPos
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock22setupRedstoneComponentER11BlockSourceRK8BlockPos
    virtual void mayPlace(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock8mayPlaceER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK13RepeaterBlock15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK13RepeaterBlock15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK13RepeaterBlock14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual void use(Player &, BlockPos const&)const; // _ZNK13RepeaterBlock3useER6PlayerRK8BlockPos
    virtual bool canSurvive(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock10canSurviveER11BlockSourceRK8BlockPos
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const; // _ZNK13RepeaterBlock11animateTickER11BlockSourceRK8BlockPosR6Random
    virtual bool canBeSilkTouched()const; // _ZNK13RepeaterBlock16canBeSilkTouchedEv
    virtual bool isLocked(BlockSource &, BlockPos const&)const; // _ZNK13RepeaterBlock8isLockedER11BlockSourceRK8BlockPos
    virtual bool isAlternateInput(Block const&)const; // _ZNK13RepeaterBlock16isAlternateInputERK5Block
    virtual void getTurnOnDelay(Block const&)const; // _ZNK13RepeaterBlock14getTurnOnDelayERK5Block
    virtual void getOnBlock(Block const*)const; // _ZNK13RepeaterBlock10getOnBlockEPK5Block
    virtual void getOffBlock(Block const*)const; // _ZNK13RepeaterBlock11getOffBlockEPK5Block
    RepeaterBlock(std::string const&, int, bool); // _ZN13RepeaterBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEib
    void updateDelay(BlockSource &, BlockPos const&, bool)const; // _ZNK13RepeaterBlock11updateDelayER11BlockSourceRK8BlockPosb
};
