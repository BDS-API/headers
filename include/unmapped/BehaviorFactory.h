#pragma once

#include "../json/Value.h"
#include <memory>
#include "./BehaviorTreeDefinitionPtr.h"
#include "../bedrock/actor/behavior/BehaviorNode.h"
#include <functional>
#include "../bedrock/description/behavior/BehaviorDefinition.h"
#include <string>


class BehaviorFactory {

public:

    ~BehaviorFactory();
    BehaviorFactory();
    void _initNodes();
//  void registerNodePair(std::string const&, std::function<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>> (void)>, std::function<std::unique_ptr<BehaviorNode, std::default_delete<BehaviorNode>> (void)>); //TODO: incomplete function definition
    void tryGetDefinition(std::string const&)const;
    void tryGetNode(std::string const&)const;
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
};
