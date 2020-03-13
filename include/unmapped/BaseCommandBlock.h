#pragma once

#include <string>
#include <memory>
#include <vector>


class BaseCommandBlock {

public:
    static std::string DefaultCommandBlockName;

    ~BaseCommandBlock(); // _ZN16BaseCommandBlockD2Ev
    BaseCommandBlock(BaseCommandBlock &&); // _ZN16BaseCommandBlockC2EOS_
    BaseCommandBlock(); // _ZN16BaseCommandBlockC2Ev
    void save(CompoundTag &)const; // _ZNK16BaseCommandBlock4saveER11CompoundTag
    void load(CompoundTag const&, DataLoadHelper &); // _ZN16BaseCommandBlock4loadERK11CompoundTagR14DataLoadHelper
    void getSuccessCount()const; // _ZNK16BaseCommandBlock15getSuccessCountEv
    void setSuccessCount(int); // _ZN16BaseCommandBlock15setSuccessCountEi
    std::string getLastOutput()const; // _ZNK16BaseCommandBlock13getLastOutputB5cxx11Ev
    void setCommand(BlockSource &, BlockPos const&, std::string const&); // _ZN16BaseCommandBlock10setCommandER11BlockSourceRK8BlockPosRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&); // _ZN16BaseCommandBlock11_setCommandER11BlockSourceRK13CommandOriginRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&); // _ZN16BaseCommandBlock10setCommandER11BlockSourceRK13ActorUniqueIDRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getCommand()const; // _ZNK16BaseCommandBlock10getCommandB5cxx11Ev
    void performCommand(BlockSource &, BlockPos const&, bool &); // _ZN16BaseCommandBlock14performCommandER11BlockSourceRK8BlockPosRb
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin>, bool &); // _ZN16BaseCommandBlock15_performCommandER11BlockSourceSt10unique_ptrI13CommandOriginSt14default_deleteIS3_EERb
    void performCommand(BlockSource &, ActorUniqueID const&); // _ZN16BaseCommandBlock14performCommandER11BlockSourceRK13ActorUniqueID
    std::string getRawName()const; // _ZNK16BaseCommandBlock10getRawNameB5cxx11Ev
    void setName(std::string const&); // _ZN16BaseCommandBlock7setNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getName()const; // _ZNK16BaseCommandBlock7getNameB5cxx11Ev
    void setTickDelay(int); // _ZN16BaseCommandBlock12setTickDelayEi
    void getTickDelay()const; // _ZNK16BaseCommandBlock12getTickDelayEv
    void setShouldExecuteOnFirstTick(bool); // _ZN16BaseCommandBlock27setShouldExecuteOnFirstTickEb
    void shouldExecuteOnFirstTick()const; // _ZNK16BaseCommandBlock24shouldExecuteOnFirstTickEv
    void setOutput(std::string const&, std::vector<std::string> const&); // _ZN16BaseCommandBlock9setOutputERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void getTrackOutput()const; // _ZNK16BaseCommandBlock14getTrackOutputEv
    void setLastOutput(std::string const&, std::vector<std::string> const&); // _ZN16BaseCommandBlock13setLastOutputERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    std::string _getTimeStamp()const; // _ZNK16BaseCommandBlock13_getTimeStampB5cxx11Ev
    void setTrackOutput(bool); // _ZN16BaseCommandBlock14setTrackOutputEb
    void compile(CommandOrigin const&, Level &); // _ZN16BaseCommandBlock7compileERK13CommandOriginR5Level
};
