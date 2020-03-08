#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../../unmapped/UIProfanityContext"
#include "../../actor/Player"
#include "../../nbt/CompoundTag"


class CommandBlockActor : BlockActor {

public:
    virtual CommandBlockActor::~CommandBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getCustomName[abi:cxx11](void)const;
    virtual void getFilteredCustomName[abi:cxx11](UIProfanityContext const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void _playerCanUpdate(Player const&)const;

    CommandBlockActor(BlockPos const&, CommandBlockMode);
    bool isAutomatic(void)const;
    void getBaseCommandBlock(void)const;
    void getCommandBlock(BlockSource &)const;
    void _loadAutomatic(bool);
    void getBaseCommandBlock(void);
    void getMode(BlockSource &)const;
    void _setAutomatic(BlockSource &, bool, CommandBlockMode);
    void _updateLastPerformedModes(bool, bool, CommandBlockMode);
    void markConditionMet(BlockSource &);
    void getDelayOnActivation(void)const;
    void performCommand(BlockSource &);
    void markForSaving(BlockSource &);
    void getTrackOutput(void)const;
    void getConditionalMode(BlockSource &)const;
    bool isRedstoneMode(void)const;
    void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool);
    void setAutomatic(BlockSource &, bool, CommandBlockMode);
    void setCustomName(std::string const&);
    void setPowered(bool);
    void getPowered(void)const;
    void getTickDelay(void)const;
    void shouldExecuteOnFirstTick(void)const;
    bool wasConditionMet(void);
    void getSuccessCount(void)const;
    void setSuccessCount(int);
    void setTrackOutput(bool);
    void getLastPerformedConditionalMode(void)const;
    void getLastPerformedRedstoneMode(void)const;
    void getLastPerformedCBMode(void)const;
    void markForSaving(BlockSource &, int, bool);
};
