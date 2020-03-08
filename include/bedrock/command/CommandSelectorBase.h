#pragma once

#include "../actor/Actor"
#include "../util/BlockPos"
#include "orgin/CommandOrigin"


class CommandSelectorBase {

public:

    CommandSelectorBase(bool);
    void setVersion(int);
    void setType(CommandSelectionType);
    bool isExplicitIdSelector()const;
    void getType()const;
    void setOrder(CommandSelectionOrder);
    void getOrder()const;
    void addNameFilter(InvertableFilter<std::string> const&);
    bool hasName()const;
    void addTypeFilter(InvertableFilter<std::string> const&);
    void addTagFilter(InvertableFilter<std::string> const&);
    void setResultCount(unsigned long);
    void setPosition(CommandPosition);
    void setBox(BlockPos);
    void setRadiusMin(float);
    void setRadiusMax(float);
    void setIncludeDeadPlayers(bool);
    void addFilter(std::function<bool ()(CommandOrigin const&, Actor const&)>);
    void setExplicitIdSelector(std::string const&);
    void compile(CommandOrigin const&, std::string &);
    bool isExpansionAllowed(CommandOrigin const&)const;
    void matchName(Actor const&)const;
    void matchType(Actor const&)const;
    void matchTag(Actor const&)const;
    void newResults(CommandOrigin const&)const;
    void filter(CommandOrigin const&, Actor &, float)const;
    bool isInDimension(CommandOrigin const&, Actor &)const;
};
