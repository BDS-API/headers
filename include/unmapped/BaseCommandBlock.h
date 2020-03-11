#pragma once

#include "./DataLoadHelper.h"
#include <memory>
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./BaseCommandBlock.h"
#include "../bedrock/command/orgin/CommandOrigin.h"
#include <vector>
#include "../bedrock/level/Level.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../bedrock/util/BlockPos.h"
#include <string>


class BaseCommandBlock {

public:
    static std::string DefaultCommandBlockName;


    ~BaseCommandBlock();
    BaseCommandBlock(BaseCommandBlock &&);
    BaseCommandBlock();
    void save(CompoundTag &)const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getSuccessCount()const;
    void setSuccessCount(int);
    std::string getLastOutput()const;
    void setCommand(BlockSource &, BlockPos const&, std::string const&);
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&);
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&);
    std::string getCommand()const;
    void performCommand(BlockSource &, BlockPos const&, bool &);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, bool &);
    void performCommand(BlockSource &, ActorUniqueID const&);
    std::string getRawName()const;
    void setName(std::string const&);
    std::string getName()const;
    void setTickDelay(int);
    void getTickDelay()const;
    void setShouldExecuteOnFirstTick(bool);
    void shouldExecuteOnFirstTick()const;
    void setOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getTrackOutput()const;
    void setLastOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    std::string _getTimeStamp()const;
    void setTrackOutput(bool);
    void compile(CommandOrigin const&, Level &);
};
