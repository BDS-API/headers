#pragma once

#include <utility>
#include "./ActorDefinitionGroup.h"
#include <memory>
#include "./ActorDefinitionPtr.h"
#include <vector>
#include <functional>
#include <string>


class ActorDefinitionDiffList {

public:

    ~ActorDefinitionDiffList();
    ActorDefinitionDiffList(ActorDefinitionGroup &);
    void addDefinition(std::string const&);
    void addDefinition(ActorDefinitionPtr &);
    void _updateStack();
    void removeDefinition(std::string const&);
    void removeDefinition(ActorDefinitionPtr &);
    bool hasDefinition(std::string const&)const;
    void clearDefinitions();
    void clearChangedDescription();
    void getDefinitionStack()const;
    void setDefinitionStack(std::vector<std::pair<bool, ActorDefinitionPtr>, std::allocator<std::pair<bool, ActorDefinitionPtr>>> &);
    void buildAdditiveDescriptionFrom(unsigned long, unsigned long);
    void getDescription(bool);
    void _getDescriptionFrom(unsigned long, unsigned long);
    void getChangedDescription();
    void getAddedDefinitionGroup()const;
    void getRemovedDefinitionGroup()const;
    bool hasChanged()const;
    void size()const;
    std::string definitionListToString()const;
    void definitionListToString(std::string const&)const;
    void forEachComponentGroup(std::function<bool (bool, ActorDefinitionPtr)>);
    void buildDescriptionFrom(unsigned long, unsigned long);
};
