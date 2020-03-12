#pragma once

#include <string>
#include <memory>


class BribeableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BribeableDefinition>> &);
    BribeableDefinition();
    void deserializeData(Json::Value &);
    void addBribeItemByName(std::string const&);
    void initialize(EntityContext &, BribeableComponent &);
    ~BribeableDefinition();
    void serializeData(Json::Value &)const;
};
