#pragma once

#include "../json/Value"


class BehaviorFactory {

public:

    BehaviorFactory(void);
    void _initNodes();
    void registerNodePair(std::string const&, std::function<std::unique_ptr ()(void)>, std::function<std::unique_ptr ()(void)>);
    void tryGetDefinition(std::string const&)const;
    void tryGetNode(std::string const&)const;
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
};
