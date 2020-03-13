#pragma once

#include <string>
#include <memory>
#include <functional>
#include "../json/Value.h"


class BehaviorFactory {

public:
    ~BehaviorFactory(); // _ZN15BehaviorFactoryD2Ev
    BehaviorFactory(); // _ZN15BehaviorFactoryC2Ev
    void _initNodes(); // _ZN15BehaviorFactory10_initNodesEv
    void registerNodePair(std::string const&, std::function<std::unique_ptr<BehaviorDefinition> (void)>, std::function<std::unique_ptr<BehaviorNode> (void)>); // _ZN15BehaviorFactory16registerNodePairERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFSt10unique_ptrI18BehaviorDefinitionSt14default_deleteISA_EEvEES8_IFS9_I12BehaviorNodeSB_ISG_EEvEE
    void tryGetDefinition(std::string const&)const; // _ZNK15BehaviorFactory16tryGetDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void tryGetNode(std::string const&)const; // _ZNK15BehaviorFactory10tryGetNodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const; // _ZNK15BehaviorFactory18loadNodeDefinitionERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEN4Json5ValueER25BehaviorTreeDefinitionPtr
};
