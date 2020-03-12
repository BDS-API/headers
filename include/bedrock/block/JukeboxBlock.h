#pragma once

#include <string>
#include "ActorBlock.h"


class JukeboxBlock : ActorBlock {

public:
    virtual bool isSignalSource()const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    ~JukeboxBlock();
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    void _setRecord(BlockSource &, BlockPos const&, ItemStack const&)const;
    void _installCircuit(BlockSource &, BlockPos const&)const;
    void _dropRecording(BlockSource &, BlockPos const&)const;
    void _getJukeboxBlockEntity(BlockSource &, BlockPos const&)const;
    JukeboxBlock(std::string const&, int);
};
