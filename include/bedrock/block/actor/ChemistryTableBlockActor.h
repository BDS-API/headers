#pragma once

#include "BlockActor.h"
#include "../../container/Container.h"


class ChemistryTableBlockActor : BlockActor, Container {

public:
    ~ChemistryTableBlockActor(); // _ZN24ChemistryTableBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN24ChemistryTableBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK24ChemistryTableBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN24ChemistryTableBlockActor4tickER11BlockSource
    virtual void onRemoved(BlockSource &); // _ZN24ChemistryTableBlockActor9onRemovedER11BlockSource
    virtual void getContainer(); // _ZN24ChemistryTableBlockActor12getContainerEv
    virtual void getItem(int)const; // _ZNK24ChemistryTableBlockActor7getItemEi
    virtual void setItem(int, ItemStack const&); // _ZN24ChemistryTableBlockActor7setItemEiRK9ItemStack
    virtual void getMaxStackSize()const; // _ZNK24ChemistryTableBlockActor15getMaxStackSizeEv
    virtual void getContainerSize()const; // _ZNK24ChemistryTableBlockActor16getContainerSizeEv
    virtual void startOpen(Player &); // _ZN24ChemistryTableBlockActor9startOpenER6Player
    virtual void stopOpen(Player &); // _ZN24ChemistryTableBlockActor8stopOpenER6Player
    ChemistryTableBlockActor(BlockPos const&); // _ZN24ChemistryTableBlockActorC2ERK8BlockPos
    void _getType(BlockSource &); // _ZN24ChemistryTableBlockActor8_getTypeER11BlockSource
    void _popPendingReactionOutput(BlockSource &); // _ZN24ChemistryTableBlockActor25_popPendingReactionOutputER11BlockSource
    void reset(BlockSource &); // _ZN24ChemistryTableBlockActor5resetER11BlockSource
    void _updateType(BlockSource &); // _ZN24ChemistryTableBlockActor11_updateTypeER11BlockSource
//  bool isSameType(ChemistryTableType)const; //TODO: incomplete function definition // _ZNK24ChemistryTableBlockActor10isSameTypeE18ChemistryTableType
    void clientLabTablePacket(LabTablePacket const&, BlockSource &); // _ZN24ChemistryTableBlockActor20clientLabTablePacketERK14LabTablePacketR11BlockSource
    void serverLabTablePacket(LabTablePacket const&, BlockSource &); // _ZN24ChemistryTableBlockActor20serverLabTablePacketERK14LabTablePacketR11BlockSource
    void _createReaction(Random &); // _ZN24ChemistryTableBlockActor15_createReactionER6Random
    void playerCloseLabTable(Player &); // _ZN24ChemistryTableBlockActor19playerCloseLabTableER6Player
    void playerOpenLabTable(Player &); // _ZN24ChemistryTableBlockActor18playerOpenLabTableER6Player
    void _getOpenedPlayer(BlockSource &); // _ZN24ChemistryTableBlockActor16_getOpenedPlayerER11BlockSource
    bool isReactionInProgress(); // _ZN24ChemistryTableBlockActor20isReactionInProgressEv
    void setShouldCombine(); // _ZN24ChemistryTableBlockActor16setShouldCombineEv
    void _getCraftableCompounds(); // _ZN24ChemistryTableBlockActor22_getCraftableCompoundsEv
};
