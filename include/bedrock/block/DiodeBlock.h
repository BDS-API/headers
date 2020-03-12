#pragma once

#include <string>
#include "BlockLegacy.h"


class DiodeBlock : BlockLegacy {

public:
    virtual void getTurnOffDelay(Block const&)const;
    virtual void getAlternateSignal(BlockSource &, BlockPos const&)const;
    virtual bool isAlternateInput(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~DiodeBlock();
    virtual void shouldTurnOn(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void shouldPrioritize(BlockSource &, BlockPos const&)const;
    virtual bool isSignalSource()const;
    virtual bool isLocked(BlockSource &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canSpawnOn()const;
    virtual void getInputSignal(BlockSource &, BlockPos const&)const;
    virtual bool isOn()const;
    virtual void getSignal(BlockSource &, BlockPos const&, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getOutputSignal(Block const&)const;
    virtual bool isSameDiode(Block const&)const;
    virtual void getDirectSignal(BlockSource &, BlockPos const&, int)const;
    bool isDiode(Block const&);
    void checkTickOnNeighbor(BlockSource &, BlockPos const&, Block const&)const;
    DiodeBlock(std::string const&, int, bool);
    void getAlternateSignalAt(BlockSource &, BlockPos const&, int)const;
};
