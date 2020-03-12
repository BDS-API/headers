#pragma once

#include <string>
#include <memory>


class AgeableDefinition {

public:
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AgeableDefinition>> &);
    bool canGrowUp()const;
    void getTicksAsBaby()const;
    void deserializeData(Json::Value &);
    void addFeedItemByName(std::string const&);
    void addDropItemByName(std::string const&);
    void serializeData(Json::Value &)const;
    ~AgeableDefinition();
    AgeableDefinition();
    void initialize(EntityContext &, AgeableComponent &);
};
