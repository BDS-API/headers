#pragma once

#include <memory>
#include <string>
#include <functional>
#include "../json/Value.h"


class BehaviorFactory {

public:
    void registerNodePair(std::string const&, std::function<std::unique_ptr<BehaviorDefinition> (void)>, std::function<std::unique_ptr<BehaviorNode> (void)>);
    void tryGetDefinition(std::string const&)const;
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
    BehaviorFactory();
    void tryGetNode(std::string const&)const;
    void _initNodes();
    ~BehaviorFactory();
};
