#pragma once

#include <memory>
#include <string>
#include <vector>


class BaseCommandBlock {

public:
    static std::string DefaultCommandBlockName;

    void compile(CommandOrigin const&, Level &);
    std::string getRawName()const;
    void performCommand(BlockSource &, ActorUniqueID const&);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin>, bool &);
    void setOutput(std::string const&, std::vector<std::string> const&);
    void getSuccessCount()const;
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&);
    void getTrackOutput()const;
    std::string getName()const;
    void setLastOutput(std::string const&, std::vector<std::string> const&);
    void shouldExecuteOnFirstTick()const;
    void setTrackOutput(bool);
    BaseCommandBlock(BaseCommandBlock &&);
    void performCommand(BlockSource &, BlockPos const&, bool &);
    std::string _getTimeStamp()const;
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&);
    void setCommand(BlockSource &, BlockPos const&, std::string const&);
    BaseCommandBlock();
    ~BaseCommandBlock();
    void setSuccessCount(int);
    void setTickDelay(int);
    void setShouldExecuteOnFirstTick(bool);
    std::string getLastOutput()const;
    void setName(std::string const&);
    std::string getCommand()const;
    void save(CompoundTag &)const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getTickDelay()const;
};
