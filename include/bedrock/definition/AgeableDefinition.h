#pragma once

#include "../../unmapped/AgeableComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class AgeableDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &);
    void addFeedItemByName(std::string const&);
    void addDropItemByName(std::string const&);
    void initialize(EntityContext &, AgeableComponent &);
    bool canGrowUp()const;
    void getTicksAsBaby()const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    AgeableDefinition(void);
};
