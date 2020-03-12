#pragma once

#include "BlockActor.h"
#include "../../item/ItemStack.h"
#include "../../container/Container.h"
#include "../../util/Random.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../actor/Player.h"
#include "../../network/packet/LabTablePacket.h"


class ChemistryTableBlockActor : BlockActor, Container {

public:
    virtual void getContainerSize()const;
    virtual void getItem(int)const;
    virtual void getMaxStackSize()const;
    virtual void getContainer();
    virtual void onRemoved(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void tick(BlockSource &);
    virtual void stopOpen(Player &);
    virtual void setItem(int, ItemStack const&);
    virtual void startOpen(Player &);
    virtual void save(CompoundTag &)const;
    ~ChemistryTableBlockActor();
    void _getCraftableCompounds();
    void clientLabTablePacket(LabTablePacket const&, BlockSource &);
    void _createReaction(Random &);
    void _popPendingReactionOutput(BlockSource &);
    void playerOpenLabTable(Player &);
    void setShouldCombine();
    void playerCloseLabTable(Player &);
    void reset(BlockSource &);
//  bool isSameType(ChemistryTableType)const; //TODO: incomplete function definition
    bool isReactionInProgress();
    void _getType(BlockSource &);
    ChemistryTableBlockActor(BlockPos const&);
    void _updateType(BlockSource &);
    void serverLabTablePacket(LabTablePacket const&, BlockSource &);
    void _getOpenedPlayer(BlockSource &);
};
