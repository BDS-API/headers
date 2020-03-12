#pragma once

#include <string>
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/AgeableComponent.h"


class AgeableDefinition {

public:
    bool canGrowUp()const;
    void initialize(EntityContext &, AgeableComponent &);
    ~AgeableDefinition();
    void getTicksAsBaby()const;
    void deserializeData(Json::Value &);
    void addFeedItemByName(std::string const&);
    void serializeData(Json::Value &)const;
    AgeableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &); //TODO: incomplete function definition
    void addDropItemByName(std::string const&);
};
