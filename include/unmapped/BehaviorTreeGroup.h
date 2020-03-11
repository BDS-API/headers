#pragma once

#include "../bedrock/pack/ResourcePackManager.h"
#include "../json/Value.h"
#include <memory>
#include "./BehaviorTreeDefinitionPtr.h"
#include "./BehaviorFactory.h"
#include "../bedrock/definition/BehaviorTreeDefinition.h"
#include <string>


class BehaviorTreeGroup {

public:

    BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    ~BehaviorTreeGroup();
    void tryGetDefinition(std::string const&);
    std::string getDefinitionIdentifiers()const;
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition, std::default_delete<BehaviorTreeDefinition>>);
    void _addRef(BehaviorTreeDefinitionPtr &);
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void _loadTrees();
    void loadTree(std::string const&);
    void initializeTrees();
    void loadTree(Json::Value, std::string const&);
};
