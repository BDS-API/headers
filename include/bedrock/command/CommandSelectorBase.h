#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "CommandPosition.h"
#include <functional>


class CommandSelectorBase {

public:
    ~CommandSelectorBase();
//  void addNameFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    void matchName(Actor const&)const;
    void getType()const;
    void matchType(Actor const&)const;
    void addFilter(std::function<bool (CommandOrigin const&, Actor const&)>);
    void newResults(CommandOrigin const&)const;
    bool isInDimension(CommandOrigin const&, Actor &)const;
//  void setType(CommandSelectionType); //TODO: incomplete function definition
//  void addTagFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    void matchTag(Actor const&)const;
    void setBox(BlockPos);
    void getOrder()const;
    std::string getName()const;
    void setResultCount(unsigned long);
    void setExplicitIdSelector(std::string const&);
    bool isExplicitIdSelector()const;
    CommandSelectorBase(bool);
//  void addTypeFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    void setVersion(int);
    void setPosition(CommandPosition);
    std::string getExplicitPlayerName()const;
    void setRadiusMin(float);
    void setRadiusMax(float);
    void compile(CommandOrigin const&, std::string &);
    void filter(CommandOrigin const&, Actor &, float)const;
    bool hasName()const;
    void setIncludeDeadPlayers(bool);
//  void setOrder(CommandSelectionOrder); //TODO: incomplete function definition
    bool isExpansionAllowed(CommandOrigin const&)const;
};
