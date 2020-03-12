#pragma once

#include "../../container/Container.h"
#include "BlockActor.h"


class ChemistryTableBlockActor : BlockActor, Container {

public:
    ~ChemistryTableBlockActor();
    virtual void onRemoved(BlockSource &);
    virtual void stopOpen(Player &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void getItem(int)const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainer();
    void playerOpenLabTable(Player &);
    void setShouldCombine();
    void playerCloseLabTable(Player &);
    void _getType(BlockSource &);
    void serverLabTablePacket(LabTablePacket const&, BlockSource &);
    ChemistryTableBlockActor(BlockPos const&);
    void _getCraftableCompounds();
    bool isReactionInProgress();
    void _popPendingReactionOutput(BlockSource &);
    void reset(BlockSource &);
    void _createReaction(Random &);
    void _updateType(BlockSource &);
    void clientLabTablePacket(LabTablePacket const&, BlockSource &);
//  bool isSameType(ChemistryTableType)const; //TODO: incomplete function definition
    void _getOpenedPlayer(BlockSource &);
};
