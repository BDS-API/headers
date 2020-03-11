#pragma once

#include <string>
#include "./BlockActor.h"
#include "../../nbt/CompoundTag.h"
#include "../../../unmapped/UIProfanityContext.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Player.h"


class CommandBlockActor : BlockActor {

public:
    virtual ~CommandBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual std::string getCustomName()const;
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void _playerCanUpdate(Player const&)const;

//  CommandBlockActor(BlockPos const&, CommandBlockMode); //TODO: incomplete function definition
    bool isAutomatic()const;
    void getBaseCommandBlock()const;
    void getCommandBlock(BlockSource &)const;
    void _loadAutomatic(bool);
    void getBaseCommandBlock();
    void getMode(BlockSource &)const;
//  void _setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
//  void _updateLastPerformedModes(bool, bool, CommandBlockMode); //TODO: incomplete function definition
    void markConditionMet(BlockSource &);
    void getDelayOnActivation()const;
    void performCommand(BlockSource &);
    void markForSaving(BlockSource &);
    void getTrackOutput()const;
    void getConditionalMode(BlockSource &)const;
    bool isRedstoneMode()const;
//  void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool); //TODO: incomplete function definition
//  void setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
    void setCustomName(std::string const&);
    void setPowered(bool);
    void getPowered()const;
    void getTickDelay()const;
    void shouldExecuteOnFirstTick()const;
    bool wasConditionMet();
    void getSuccessCount()const;
    void setSuccessCount(int);
    std::string getCommand()const;
    std::string getLastOutput()const;
    void setTrackOutput(bool);
    void getLastPerformedConditionalMode()const;
    void getLastPerformedRedstoneMode()const;
    void getLastPerformedCBMode()const;
    void markForSaving(BlockSource &, int, bool);
};
