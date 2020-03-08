#pragma once

#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/level/Level"
#include "../bedrock/util/BlockPos"
#include "../bedrock/command/orgin/CommandOrigin"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class BaseCommandBlock {

public:
    static long DefaultCommandBlockName[abi:cxx11];


    BaseCommandBlock(BaseCommandBlock&&);
    BaseCommandBlock(void);
    void save(CompoundTag &)const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getSuccessCount()const;
    void setSuccessCount(int);
    void setCommand(BlockSource &, BlockPos const&, std::string const&);
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&);
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&);
    void performCommand(BlockSource &, BlockPos const&, bool &);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, bool &);
    void performCommand(BlockSource &, ActorUniqueID const&);
    void setName(std::string const&);
    void setTickDelay(int);
    void getTickDelay()const;
    void setShouldExecuteOnFirstTick(bool);
    void shouldExecuteOnFirstTick()const;
    void setOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getTrackOutput()const;
    void setLastOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void setTrackOutput(bool);
    void compile(CommandOrigin const&, Level &);
};
