#pragma once

class CommandSelectorBase {

public:

    void CommandSelectorBase(bool);
    void setVersion(int);
    void setType(CommandSelectionType);
    bool isExplicitIdSelector(void)const;
    void getType(void)const;
    void setOrder(CommandSelectionOrder);
    void getOrder(void)const;
    void addNameFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    bool hasName(void)const;
    void addTypeFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    void addTagFilter(InvertableFilter<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>> const&);
    void setResultCount(unsigned long);
    void setPosition(CommandPosition);
    void setBox(BlockPos);
    void setRadiusMin(float);
    void setRadiusMax(float);
    void setIncludeDeadPlayers(bool);
    void addFilter(std::function<bool ()(CommandOrigin const&, Actor const&)>);
    void setExplicitIdSelector(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void compile(CommandOrigin const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &);
    bool isExpansionAllowed(CommandOrigin const&)const;
    void matchName(Actor const&)const;
    void matchType(Actor const&)const;
    void matchTag(Actor const&)const;
    void newResults(CommandOrigin const&)const;
    void filter(CommandOrigin const&, Actor &, float)const;
    bool isInDimension(CommandOrigin const&, Actor &)const;
};
