#pragma once

#include <string>
#include "../../unmapped/BribeableComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./BribeableDefinition.h"
#include "../../json/Value.h"


class BribeableDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &); //TODO: incomplete function definition
    void addBribeItemByName(std::string const&);
    void initialize(EntityContext &, BribeableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BribeableDefinition();
    ~BribeableDefinition();
};
