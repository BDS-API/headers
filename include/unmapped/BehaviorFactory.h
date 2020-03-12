#pragma once

#include "../bedrock/description/behavior/BehaviorDefinition.h"
#include <string>
#include "../bedrock/actor/behavior/BehaviorNode.h"
#include "../json/Value.h"
#include <functional>
#include <memory>
#include "BehaviorTreeDefinitionPtr.h"


class BehaviorFactory {

public:
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
    void tryGetNode(std::string const&)const;
    ~BehaviorFactory();
    BehaviorFactory();
    void tryGetDefinition(std::string const&)const;
    void registerNodePair(std::string const&, std::function<std::unique_ptr<BehaviorDefinition> (void)>, std::function<std::unique_ptr<BehaviorNode> (void)>);
    void _initNodes();
};
