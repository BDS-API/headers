#pragma once

#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/level/Level.h"
#include <string>
#include "../bedrock/command/origin/CommandOrigin.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "DataLoadHelper.h"


class BaseCommandBlock {

public:
    static std::string DefaultCommandBlockName;

    void getSuccessCount()const;
    BaseCommandBlock();
    void setCommand(BlockSource &, BlockPos const&, std::string const&);
    void getTickDelay()const;
    void shouldExecuteOnFirstTick()const;
    void load(CompoundTag const&, DataLoadHelper &);
    void performCommand(BlockSource &, ActorUniqueID const&);
    void setName(std::string const&);
    void setOutput(std::string const&, std::vector<std::string> const&);
    std::string getLastOutput()const;
    void setTickDelay(int);
    std::string getRawName()const;
    ~BaseCommandBlock();
    std::string _getTimeStamp()const;
    void compile(CommandOrigin const&, Level &);
    std::string getName()const;
    void getTrackOutput()const;
    void setSuccessCount(int);
    std::string getCommand()const;
    void performCommand(BlockSource &, BlockPos const&, bool &);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin>, bool &);
    void setLastOutput(std::string const&, std::vector<std::string> const&);
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&);
    BaseCommandBlock(BaseCommandBlock &&);
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&);
    void save(CompoundTag &)const;
    void setTrackOutput(bool);
    void setShouldExecuteOnFirstTick(bool);
};
