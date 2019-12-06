#pragma once

class CommandBlockComponent {

public:

    void CommandBlockComponent(CommandBlockComponent&&);
    void CommandBlockComponent(void);
    void addAdditionalSaveData(CompoundTag &);
    void readAdditionalSaveData(Actor &, CompoundTag const&, DataLoadHelper &);
    void initFromDefinition(Actor &);
    void getTicking(void)const;
    void setTicking(bool);
    void _updateTickCount(void);
    void getCurrentTickCount(void)const;
    void decrementTickCount(void);
    void getBaseCommandBlock(void)const;
    void getBaseCommandBlock(void);
    void setTrackOutput(Actor &, bool);
    void setName(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void onCommandBlockUpdate(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, int, bool);
    void setLastOutput(Actor &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void resetCurrentTick(void);
};
