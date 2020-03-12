#pragma once

#include <string>
#include "../json/Value.h"
#include "../bedrock/pack/ResourcePackManager.h"
#include "../bedrock/definition/BehaviorTreeDefinition.h"
#include <memory>
#include "BehaviorTreeDefinitionPtr.h"
#include "BehaviorFactory.h"


class BehaviorTreeGroup {

public:
    void _loadTrees();
    void _removeRef(BehaviorTreeDefinitionPtr &);
    void addBehaviorTree(std::unique_ptr<BehaviorTreeDefinition>);
    void tryGetDefinition(std::string const&);
    void loadTree(std::string const&);
    void initializeTrees();
    void _addRef(BehaviorTreeDefinitionPtr &);
    std::string getDefinitionIdentifiers()const;
    BehaviorTreeGroup(ResourcePackManager &, BehaviorFactory &);
    void loadTree(Json::Value, std::string const&);
    ~BehaviorTreeGroup();
};
