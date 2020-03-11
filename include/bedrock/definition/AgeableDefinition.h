#pragma once

#include <string>
#include "./AgeableDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/AgeableComponent.h"
#include "../../json/Value.h"


class AgeableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &); //TODO: incomplete function definition
    void addFeedItemByName(std::string const&);
    void addDropItemByName(std::string const&);
    void initialize(EntityContext &, AgeableComponent &);
    bool canGrowUp()const;
    void getTicksAsBaby()const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    AgeableDefinition();
    ~AgeableDefinition();
};
