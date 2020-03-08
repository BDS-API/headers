#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../../unmapped/UIProfanityContext"
#include "../../util/BlockPos"
#include "../../actor/Player"
#include "../../../unmapped/DataLoadHelper"


class CommandBlockActor : BlockActor {

public:
    virtual CommandBlockActor::~CommandBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getCustomName()const;
    virtual void getFilteredCustomName(UIProfanityContext const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void _playerCanUpdate(Player const&)const;

    CommandBlockActor(BlockPos const&, CommandBlockMode);
    bool isAutomatic()const;
    void getBaseCommandBlock()const;
    void getCommandBlock(BlockSource &)const;
    void _loadAutomatic(bool);
    void getBaseCommandBlock();
    void getMode(BlockSource &)const;
    void _setAutomatic(BlockSource &, bool, CommandBlockMode);
    void _updateLastPerformedModes(bool, bool, CommandBlockMode);
    void markConditionMet(BlockSource &);
    void getDelayOnActivation()const;
    void performCommand(BlockSource &);
    void markForSaving(BlockSource &);
    void getTrackOutput()const;
    void getConditionalMode(BlockSource &)const;
    bool isRedstoneMode()const;
    void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool);
    void setAutomatic(BlockSource &, bool, CommandBlockMode);
    void setCustomName(std::string const&);
    void setPowered(bool);
    void getPowered()const;
    void getTickDelay()const;
    void shouldExecuteOnFirstTick()const;
    bool wasConditionMet();
    void getSuccessCount()const;
    void setSuccessCount(int);
    void setTrackOutput(bool);
    void getLastPerformedConditionalMode()const;
    void getLastPerformedRedstoneMode()const;
    void getLastPerformedCBMode()const;
    void markForSaving(BlockSource &, int, bool);
};
