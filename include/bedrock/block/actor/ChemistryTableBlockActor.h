#pragma once

#include "../../util/Random.h"
#include "../../container/Container.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../network/packet/LabTablePacket.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../../item/ItemStack.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class ChemistryTableBlockActor : BlockActor, Container {

public:
    virtual ~ChemistryTableBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onRemoved(BlockSource &);
    virtual void getContainer();
    virtual void getItem(int)const;
    virtual void setItem(int, ItemStack const&);
    virtual void getMaxStackSize()const;
    virtual void getContainerSize()const;
    virtual void startOpen(Player &);
    virtual void stopOpen(Player &);

    ChemistryTableBlockActor(BlockPos const&);
    void _getType(BlockSource &);
    void _popPendingReactionOutput(BlockSource &);
    void reset(BlockSource &);
    void _updateType(BlockSource &);
//  bool isSameType(ChemistryTableType)const; //TODO: incomplete function definition
    void clientLabTablePacket(LabTablePacket const&, BlockSource &);
    void serverLabTablePacket(LabTablePacket const&, BlockSource &);
    void _createReaction(Random &);
    void playerCloseLabTable(Player &);
    void playerOpenLabTable(Player &);
    void _getOpenedPlayer(BlockSource &);
    bool isReactionInProgress();
    void setShouldCombine();
    void _getCraftableCompounds();
};
