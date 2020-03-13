#pragma once

#include <string>
#include <functional>
#include <vector>


class ActorDefinitionDiffList {

public:
    ~ActorDefinitionDiffList(); // _ZN23ActorDefinitionDiffListD2Ev
    ActorDefinitionDiffList(ActorDefinitionGroup &); // _ZN23ActorDefinitionDiffListC2ER20ActorDefinitionGroup
    void addDefinition(std::string const&); // _ZN23ActorDefinitionDiffList13addDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void addDefinition(ActorDefinitionPtr &); // _ZN23ActorDefinitionDiffList13addDefinitionER18ActorDefinitionPtr
    void _updateStack(); // _ZN23ActorDefinitionDiffList12_updateStackEv
    void removeDefinition(std::string const&); // _ZN23ActorDefinitionDiffList16removeDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeDefinition(ActorDefinitionPtr &); // _ZN23ActorDefinitionDiffList16removeDefinitionER18ActorDefinitionPtr
    bool hasDefinition(std::string const&)const; // _ZNK23ActorDefinitionDiffList13hasDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clearDefinitions(); // _ZN23ActorDefinitionDiffList16clearDefinitionsEv
    void clearChangedDescription(); // _ZN23ActorDefinitionDiffList23clearChangedDescriptionEv
    void getDefinitionStack()const; // _ZNK23ActorDefinitionDiffList18getDefinitionStackEv
    void setDefinitionStack(std::vector<std::pair<bool, ActorDefinitionPtr>> &); // _ZN23ActorDefinitionDiffList18setDefinitionStackERSt6vectorISt4pairIb18ActorDefinitionPtrESaIS3_EE
    void buildAdditiveDescriptionFrom(unsigned long, unsigned long); // _ZN23ActorDefinitionDiffList28buildAdditiveDescriptionFromEmm
    void getDescription(bool); // _ZN23ActorDefinitionDiffList14getDescriptionEb
    void _getDescriptionFrom(unsigned long, unsigned long); // _ZN23ActorDefinitionDiffList19_getDescriptionFromEmm
    void getChangedDescription(); // _ZN23ActorDefinitionDiffList21getChangedDescriptionEv
    void getAddedDefinitionGroup()const; // _ZNK23ActorDefinitionDiffList23getAddedDefinitionGroupEv
    void getRemovedDefinitionGroup()const; // _ZNK23ActorDefinitionDiffList25getRemovedDefinitionGroupEv
    bool hasChanged()const; // _ZNK23ActorDefinitionDiffList10hasChangedEv
    void size()const; // _ZNK23ActorDefinitionDiffList4sizeEv
    std::string definitionListToString()const; // _ZNK23ActorDefinitionDiffList22definitionListToStringB5cxx11Ev
    void definitionListToString(std::string const&)const; // _ZNK23ActorDefinitionDiffList22definitionListToStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void forEachComponentGroup(std::function<bool (bool, ActorDefinitionPtr)>); // _ZN23ActorDefinitionDiffList21forEachComponentGroupESt8functionIFbb18ActorDefinitionPtrEE
    void buildDescriptionFrom(unsigned long, unsigned long); // _ZN23ActorDefinitionDiffList20buildDescriptionFromEmm
};
