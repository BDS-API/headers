#pragma once

#include <string>
#include <vector>
#include <functional>


class ActorDefinitionDiffList {

public:
    void getChangedDescription();
    std::string definitionListToString()const;
    void _getDescriptionFrom(unsigned long, unsigned long);
    void size()const;
    ~ActorDefinitionDiffList();
    void clearChangedDescription();
    void removeDefinition(std::string const&);
    void addDefinition(ActorDefinitionPtr &);
    void clearDefinitions();
    void _updateStack();
    void definitionListToString(std::string const&)const;
    bool hasChanged()const;
    void getDefinitionStack()const;
    ActorDefinitionDiffList(ActorDefinitionGroup &);
    void getAddedDefinitionGroup()const;
    void removeDefinition(ActorDefinitionPtr &);
    void setDefinitionStack(std::vector<std::pair<bool, ActorDefinitionPtr>> &);
    void addDefinition(std::string const&);
    void getRemovedDefinitionGroup()const;
    void buildAdditiveDescriptionFrom(unsigned long, unsigned long);
    void buildDescriptionFrom(unsigned long, unsigned long);
    void getDescription(bool);
    void forEachComponentGroup(std::function<bool (bool, ActorDefinitionPtr)>);
    bool hasDefinition(std::string const&)const;
};
