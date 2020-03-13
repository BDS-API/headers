#pragma once

#include <string>
#include "BlockActor.h"


class CommandBlockActor : BlockActor {

public:
    ~CommandBlockActor(); // _ZN17CommandBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN17CommandBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK17CommandBlockActor4saveER11CompoundTag
    virtual void saveBlockData(CompoundTag &, BlockSource &)const; // _ZNK17CommandBlockActor13saveBlockDataER11CompoundTagR11BlockSource
    virtual void loadBlockData(CompoundTag const&, BlockSource &, DataLoadHelper &); // _ZN17CommandBlockActor13loadBlockDataERK11CompoundTagR11BlockSourceR14DataLoadHelper
    virtual void onCustomTagLoadDone(BlockSource &); // _ZN17CommandBlockActor19onCustomTagLoadDoneER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN17CommandBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN17CommandBlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN17CommandBlockActor7onPlaceER11BlockSource
    virtual std::string getCustomName()const; // _ZNK17CommandBlockActor13getCustomNameB5cxx11Ev
    virtual std::string getFilteredCustomName(UIProfanityContext const&); // _ZN17CommandBlockActor21getFilteredCustomNameB5cxx11ERK18UIProfanityContext
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN17CommandBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    virtual void _playerCanUpdate(Player const&)const; // _ZNK17CommandBlockActor16_playerCanUpdateERK6Player
//  CommandBlockActor(BlockPos const&, CommandBlockMode); //TODO: incomplete function definition // _ZN17CommandBlockActorC2ERK8BlockPos16CommandBlockMode
    bool isAutomatic()const; // _ZNK17CommandBlockActor11isAutomaticEv
    void getBaseCommandBlock()const; // _ZNK17CommandBlockActor19getBaseCommandBlockEv
    void getCommandBlock(BlockSource &)const; // _ZNK17CommandBlockActor15getCommandBlockER11BlockSource
    void _loadAutomatic(bool); // _ZN17CommandBlockActor14_loadAutomaticEb
    void getBaseCommandBlock(); // _ZN17CommandBlockActor19getBaseCommandBlockEv
    void getMode(BlockSource &)const; // _ZNK17CommandBlockActor7getModeER11BlockSource
//  void _setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition // _ZN17CommandBlockActor13_setAutomaticER11BlockSourceb16CommandBlockMode
//  void _updateLastPerformedModes(bool, bool, CommandBlockMode); //TODO: incomplete function definition // _ZN17CommandBlockActor25_updateLastPerformedModesEbb16CommandBlockMode
    void markConditionMet(BlockSource &); // _ZN17CommandBlockActor16markConditionMetER11BlockSource
    void getDelayOnActivation()const; // _ZNK17CommandBlockActor20getDelayOnActivationEv
    void performCommand(BlockSource &); // _ZN17CommandBlockActor14performCommandER11BlockSource
    void markForSaving(BlockSource &); // _ZN17CommandBlockActor13markForSavingER11BlockSource
    void getTrackOutput()const; // _ZNK17CommandBlockActor14getTrackOutputEv
    void getConditionalMode(BlockSource &)const; // _ZNK17CommandBlockActor18getConditionalModeER11BlockSource
    bool isRedstoneMode()const; // _ZNK17CommandBlockActor14isRedstoneModeEv
//  void updateBlock(BlockSource &, std::string const&, std::string const&, CommandBlockMode, bool, bool, bool, int, bool); //TODO: incomplete function definition // _ZN17CommandBlockActor11updateBlockER11BlockSourceRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_16CommandBlockModebbbib
//  void setAutomatic(BlockSource &, bool, CommandBlockMode); //TODO: incomplete function definition // _ZN17CommandBlockActor12setAutomaticER11BlockSourceb16CommandBlockMode
    void setCustomName(std::string const&); // _ZN17CommandBlockActor13setCustomNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setPowered(bool); // _ZN17CommandBlockActor10setPoweredEb
    void getPowered()const; // _ZNK17CommandBlockActor10getPoweredEv
    void getTickDelay()const; // _ZNK17CommandBlockActor12getTickDelayEv
    void shouldExecuteOnFirstTick()const; // _ZNK17CommandBlockActor24shouldExecuteOnFirstTickEv
    bool wasConditionMet(); // _ZN17CommandBlockActor15wasConditionMetEv
    void getSuccessCount()const; // _ZNK17CommandBlockActor15getSuccessCountEv
    void setSuccessCount(int); // _ZN17CommandBlockActor15setSuccessCountEi
    std::string getCommand()const; // _ZNK17CommandBlockActor10getCommandB5cxx11Ev
    std::string getLastOutput()const; // _ZNK17CommandBlockActor13getLastOutputB5cxx11Ev
    void setTrackOutput(bool); // _ZN17CommandBlockActor14setTrackOutputEb
    void getLastPerformedConditionalMode()const; // _ZNK17CommandBlockActor31getLastPerformedConditionalModeEv
    void getLastPerformedRedstoneMode()const; // _ZNK17CommandBlockActor28getLastPerformedRedstoneModeEv
    void getLastPerformedCBMode()const; // _ZNK17CommandBlockActor22getLastPerformedCBModeEv
    void markForSaving(BlockSource &, int, bool); // _ZN17CommandBlockActor13markForSavingER11BlockSourceib
};
