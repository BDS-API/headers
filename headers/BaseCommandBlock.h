#pragma once

class BaseCommandBlock {

public:

    void BaseCommandBlock(BaseCommandBlock&&);
    void BaseCommandBlock(void);
    void save(CompoundTag &)const;
    void load(CompoundTag const&, DataLoadHelper &);
    void getSuccessCount(void)const;
    void setSuccessCount(int);
    void setCommand(BlockSource &, BlockPos const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _setCommand(BlockSource &, CommandOrigin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setCommand(BlockSource &, ActorUniqueID const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void performCommand(BlockSource &, BlockPos const&, bool &);
    void _performCommand(BlockSource &, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, bool &);
    void performCommand(BlockSource &, ActorUniqueID const&);
    void setName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setTickDelay(int);
    void getTickDelay(void)const;
    void setShouldExecuteOnFirstTick(bool);
    void shouldExecuteOnFirstTick(void)const;
    void setOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void getTrackOutput(void)const;
    void setLastOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void setTrackOutput(bool);
    void compile(CommandOrigin const&, Level &);
};
