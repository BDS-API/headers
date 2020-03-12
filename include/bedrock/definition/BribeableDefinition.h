#pragma once

#include <string>
#include "../../json/Value.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/BribeableComponent.h"


class BribeableDefinition {

public:
    BribeableDefinition();
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    ~BribeableDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, BribeableComponent &);
    void addBribeItemByName(std::string const&);
};
