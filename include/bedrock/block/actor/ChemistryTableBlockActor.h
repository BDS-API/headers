#pragma once

#include "../../network/packet/LabTablePacket"
#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../container/Container"
#include "../../../unmapped/BlockSource"
#include "../../actor/Player"
#include "../../item/ItemStack"
#include "../../../unmapped/Random"
#include "../../nbt/CompoundTag"


class ChemistryTableBlockActor : BlockActor, Container {

public:
    virtual ChemistryTableBlockActor::~ChemistryTableBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void getContainer(void);
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize(void)const;
    virtual void getContainerSize(void)const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    ChemistryTableBlockActor(BlockPos const&);
    void _getType(BlockSource &);
    void _popPendingReactionOutput(BlockSource &);
    void reset(BlockSource &);
    void _updateType(BlockSource &);
    bool isSameType(ChemistryTableType)const;
    void clientLabTablePacket(LabTablePacket const&, BlockSource &);
    void serverLabTablePacket(LabTablePacket const&, BlockSource &);
    void _createReaction(Random &);
    void playerCloseLabTable(Player &);
    void playerOpenLabTable(Player &);
    void _getOpenedPlayer(BlockSource &);
    bool isReactionInProgress(void);
    void setShouldCombine(void);
    void _getCraftableCompounds(void);
};
