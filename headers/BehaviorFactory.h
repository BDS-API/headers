#pragma once

class BehaviorFactory {

public:

    void BehaviorFactory(void);
    void _initNodes(void);
    void registerNodePair(std::string const&, std::function<std::unique_ptr<BehaviorDefinition, std::default_delete<BehaviorDefinition>> ()(void)>, std::function<std::unique_ptr<BehaviorNode, std::default_delete<BehaviorNode>> ()(void)>);
    void tryGetDefinition(std::string const&)const;
    void tryGetNode(std::string const&)const;
    void loadNodeDefinition(std::string const&, Json::Value, BehaviorTreeDefinitionPtr &)const;
};
