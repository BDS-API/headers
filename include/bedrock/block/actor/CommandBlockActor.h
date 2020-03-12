#pragma once

#include "BlockActor.h"
#include <string>
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/UIProfanityContext.h"
#include "../../actor/Player.h"


class CommandBlockActor : BlockActor {

public:
    virtual void getUpdatePacket(BlockSource &);
    ~CommandBlockActor();
    virtual void onCustomTagLoadDone(BlockSource &);
    virtual void saveBlockData(CompoundTag &, BlockSource &)const;
    virtual void onChanged(BlockSource &);
    virtual std::string getCustomName()const;
    virtual void _playerCanUpdate(Player const&)const;
    virtual void onPlace(BlockSource &);
    virtual std::string getFilteredCustomName(UIProfanityContext const&);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    void getTrackOutput()const;
//  void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool); //TODO: incomplete function definition
//  void _updateLastPerformedModes(bool, bool, CommandBlockMode); //TODO: incomplete function definition
    std::string getLastOutput()const;
    void getCommandBlock(BlockSource &)const;
    void setSuccessCount(int);
    void getDelayOnActivation()const;
    void shouldExecuteOnFirstTick()const;
    void getBaseCommandBlock();
    bool isRedstoneMode()const;
    void setTrackOutput(bool);
    bool wasConditionMet();
    bool isAutomatic()const;
    void getLastPerformedConditionalMode()const;
    void getConditionalMode(BlockSource &)const;
    void setCustomName(std::string const&);
    void getLastPerformedCBMode()const;
    void getLastPerformedRedstoneMode()const;
    void getSuccessCount()const;
    void getBaseCommandBlock()const;
    void getPowered()const;
    std::string getCommand()const;
//  void setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
    void performCommand(BlockSource &);
    void markConditionMet(BlockSource &);
//  CommandBlockActor(BlockPos const&, CommandBlockMode); //TODO: incomplete function definition
    void setPowered(bool);
    void _loadAutomatic(bool);
    void markForSaving(BlockSource &, int, bool);
//  void _setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition
    void getTickDelay()const;
    void getMode(BlockSource &)const;
    void markForSaving(BlockSource &);
};
