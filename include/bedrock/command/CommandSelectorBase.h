#pragma once

#include "./CommandPosition.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include <functional>
#include "orgin/CommandOrigin.h"
#include <string>


class CommandSelectorBase {

public:

    ~CommandSelectorBase();
    CommandSelectorBase(bool);
    void setVersion(int);
//  void setType(CommandSelectionType); //TODO: incomplete function definition
    bool isExplicitIdSelector()const;
    void getType()const;
//  void setOrder(CommandSelectionOrder); //TODO: incomplete function definition
    void getOrder()const;
//  void addNameFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    bool hasName()const;
    std::string getName()const;
//  void addTypeFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
//  void addTagFilter(InvertableFilter<std::string> const&); //TODO: incomplete function definition
    void setResultCount(unsigned long);
    void setPosition(CommandPosition);
    void setBox(BlockPos);
    void setRadiusMin(float);
    void setRadiusMax(float);
    void setIncludeDeadPlayers(bool);
    void addFilter(std::function<bool (CommandOrigin const&, Actor const&)>);
    void setExplicitIdSelector(std::string const&);
    void compile(CommandOrigin const&, std::string &);
    bool isExpansionAllowed(CommandOrigin const&)const;
    void matchName(Actor const&)const;
    void matchType(Actor const&)const;
    void matchTag(Actor const&)const;
    void newResults(CommandOrigin const&)const;
    void filter(CommandOrigin const&, Actor &, float)const;
    bool isInDimension(CommandOrigin const&, Actor &)const;
    std::string getExplicitPlayerName()const;
};
