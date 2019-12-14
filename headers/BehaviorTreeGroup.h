#pragma once

class BehaviorTreeGroup {

public:

    void BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    void tryGetDefinition(std::string const&);
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition, std::default_delete<BehaviorTreeDefinition>>);
    void _addRef(BehaviorTreeDefinitionPtr &);
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void _loadTrees(void);
    void loadTree(std::string const&);
    void initializeTrees(void);
    void loadTree(Json::Value, std::string const&);
};
