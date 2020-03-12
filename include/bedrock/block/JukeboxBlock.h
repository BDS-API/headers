#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "ActorBlock.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "../item/ItemStack.h"


class JukeboxBlock : ActorBlock {

public:
    ~JukeboxBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual bool hasComparatorSignal()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    void _getJukeboxBlockEntity(BlockSource &, BlockPos const&)const;
    JukeboxBlock(std::string const&, int);
    void _setRecord(BlockSource &, BlockPos const&, ItemStack const&)const;
    void _dropRecording(BlockSource &, BlockPos const&)const;
    void _installCircuit(BlockSource &, BlockPos const&)const;
};
