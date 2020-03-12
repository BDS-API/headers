#pragma once

#include <memory>
#include <string>
#include "../json/Value.h"


class BehaviorTreeGroup {

public:
    void loadTree(std::string const&);
    std::string getDefinitionIdentifiers()const;
    BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    ~BehaviorTreeGroup();
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition>);
    void initializeTrees();
    void loadTree(Json::Value, std::string const&);
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void _loadTrees();
    void tryGetDefinition(std::string const&);
    void _addRef(BehaviorTreeDefinitionPtr &);
};
