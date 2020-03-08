#pragma once

#include "../../unmapped/BribeableComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class BribeableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &);
    void addBribeItemByName(std::string const&);
    void initialize(EntityContext &, BribeableComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    BribeableDefinition(void);
};
