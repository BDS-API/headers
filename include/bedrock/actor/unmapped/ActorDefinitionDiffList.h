#pragma once

#include <string>
#include <functional>
#include <vector>
#include "ActorDefinitionPtr.h"
#include "ActorDefinitionGroup.h"
#include <utility>


class ActorDefinitionDiffList {

public:
    bool hasDefinition(std::string const&)const;
    void buildDescriptionFrom(unsigned long, unsigned long);
    void _getDescriptionFrom(unsigned long, unsigned long);
    void addDefinition(std::string const&);
    void getRemovedDefinitionGroup()const;
    void removeDefinition(std::string const&);
    void buildAdditiveDescriptionFrom(unsigned long, unsigned long);
    void getAddedDefinitionGroup()const;
    void getDescription(bool);
    void addDefinition(ActorDefinitionPtr &);
    bool hasChanged()const;
    void size()const;
    std::string definitionListToString()const;
    void clearChangedDescription();
    void removeDefinition(ActorDefinitionPtr &);
    void getChangedDescription();
    void getDefinitionStack()const;
    void _updateStack();
    void clearDefinitions();
    void forEachComponentGroup(std::function<bool (bool, ActorDefinitionPtr)>);
    void definitionListToString(std::string const&)const;
    void setDefinitionStack(std::vector<std::pair<bool, ActorDefinitionPtr>> &);
    ActorDefinitionDiffList(ActorDefinitionGroup &);
    ~ActorDefinitionDiffList();
};
