#pragma once

#include <string>
#include "../util/BlockPos.h"
#include "CommandPosition.h"
#include "../actor/Actor.h"
#include "origin/CommandOrigin.h"
#include <functional>


class CommandSelectorBase {

public:
    void addFilter(std::function<bool (CommandOrigin const&, Actor const&)>);
    void getOrder()const;
    bool isExpansionAllowed(CommandOrigin const&)const;
    void setResultCount(unsigned long);
    void setIncludeDeadPlayers(bool);
    CommandSelectorBase(bool);
    void getType()const;
    bool isExplicitIdSelector()const;
    void setBox(BlockPos);
    ~CommandSelectorBase();
    void setExplicitIdSelector(std::string const&);
    std::string getExplicitPlayerName()const;
//  void addNameFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
//  void setType(CommandSelectionType); //TODO: incomplete function definition
    void setRadiusMin(float);
//  void addTypeFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    bool isInDimension(CommandOrigin const&, Actor &)const;
    void setPosition(CommandPosition);
    void setRadiusMax(float);
//  void setOrder(CommandSelectionOrder); //TODO: incomplete function definition
    void compile(CommandOrigin const&, std::string &);
//  void addTagFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    std::string getName()const;
    void matchName(Actor const&)const;
    void setVersion(int);
    void newResults(CommandOrigin const&)const;
    void matchTag(Actor const&)const;
    void filter(CommandOrigin const&, Actor &, float)const;
    bool hasName()const;
    void matchType(Actor const&)const;
};
