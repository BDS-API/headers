#pragma once

#include <string>
#include "BlockActor.h"


class CommandBlockActor : BlockActor {

public:
    ~CommandBlockActor();
    virtual void onPlace(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    virtual std::string getCustomName()const;
    virtual void save(CompoundTag &)const;
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void _playerCanUpdate(Player const&)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    void getSuccessCount()const;
    void setSuccessCount(int);
//  void _setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
//  void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool); //TODO: incomplete function definition
    void getLastPerformedRedstoneMode()const;
    void getDelayOnActivation()const;
    void shouldExecuteOnFirstTick()const;
    void getMode(BlockSource &)const;
//  void _updateLastPerformedModes(bool, bool, CommandBlockMode); //TODO: incomplete function definition
    void markConditionMet(BlockSource &);
    void getTrackOutput()const;
    void getTickDelay()const;
    void getLastPerformedConditionalMode()const;
    void _loadAutomatic(bool);
    bool isRedstoneMode()const;
//  void setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
    void performCommand(BlockSource &);
    void setTrackOutput(bool);
    std::string getLastOutput()const;
    void markForSaving(BlockSource &);
    void getCommandBlock(BlockSource &)const;
    void setPowered(bool);
    void getLastPerformedCBMode()const;
    void getConditionalMode(BlockSource &)const;
//  CommandBlockActor(BlockPos const&, CommandBlockMode); //TODO: incomplete function definition
    void getPowered()const;
    void setCustomName(std::string const&);
    bool isAutomatic()const;
    void markForSaving(BlockSource &, int, bool);
    std::string getCommand()const;
    bool wasConditionMet();
    void getBaseCommandBlock()const;
    void getBaseCommandBlock();
};
