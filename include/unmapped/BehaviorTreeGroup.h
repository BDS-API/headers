#pragma once

#include <string>
#include <memory>
#include "../json/Value.h"


class BehaviorTreeGroup {

public:
    BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &); // _ZN17BehaviorTreeGroupC2ER19ResourcePackManagerR15BehaviorFactory
    ~BehaviorTreeGroup(); // _ZN17BehaviorTreeGroupD2Ev
    void tryGetDefinition(std::string const&); // _ZN17BehaviorTreeGroup16tryGetDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getDefinitionIdentifiers()const; // _ZNK17BehaviorTreeGroup24getDefinitionIdentifiersB5cxx11Ev
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition>); // _ZN17BehaviorTreeGroup15addBehaviorTreeESt10unique_ptrI22BehaviorTreeDefinitionSt14default_deleteIS1_EE
    void _addRef(BehaviorTreeDefinitionPtr &); // _ZN17BehaviorTreeGroup7_addRefER25BehaviorTreeDefinitionPtr
    void _removeRef(BehaviorTreeDefinitionPtr &); // _ZN17BehaviorTreeGroup10_removeRefER25BehaviorTreeDefinitionPtr
    void _loadTrees(); // _ZN17BehaviorTreeGroup10_loadTreesEv
    void loadTree(std::string const&); // _ZN17BehaviorTreeGroup8loadTreeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void initializeTrees(); // _ZN17BehaviorTreeGroup15initializeTreesEv
    void loadTree(Json::Value, std::string const&); // _ZN17BehaviorTreeGroup8loadTreeEN4Json5ValueERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
