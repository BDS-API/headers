#pragma once

class BaseCommandBlock {

public:
    static long DefaultCommandBlockName[abi:cxx11];


    BaseCommandBlock(BaseCommandBlock&&);
    BaseCommandBlock(void);
    void save(CompoundTag &)const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getSuccessCount(void)const;
    void setSuccessCount(int);
    void setCommand(BlockSource &, BlockPos const&, std::string const&);
    void _setCommand(BlockSource &, CommandOrigin const&, std::string const&);
    void setCommand(BlockSource &, ActorUniqueID const&, std::string const&);
    void performCommand(BlockSource &, BlockPos const&, bool &);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, bool &);
    void performCommand(BlockSource &, ActorUniqueID const&);
    void setName(std::string const&);
    void setTickDelay(int);
    void getTickDelay(void)const;
    void setShouldExecuteOnFirstTick(bool);
    void shouldExecuteOnFirstTick(void)const;
    void setOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getTrackOutput(void)const;
    void setLastOutput(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void setTrackOutput(bool);
    void compile(CommandOrigin const&, Level &);
};
