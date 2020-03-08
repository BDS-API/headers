#pragma once

#include "../bedrock/definition/BehaviorTreeDefinition"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"


class BehaviorTreeGroup {

public:

    BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    void tryGetDefinition(std::string const&);
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition, std::default_delete<BehaviorTreeDefinition>>);
    void _addRef(BehaviorTreeDefinitionPtr &);
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void _loadTrees();
    void loadTree(std::string const&);
    void initializeTrees();
    void loadTree(Json::Value, std::string const&);
};
