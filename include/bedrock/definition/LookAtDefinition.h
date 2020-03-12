#pragma once

#include <memory>


class LookAtDefinition {

public:
    ~LookAtDefinition();
    LookAtDefinition();
    void initialize(EntityContext &, LookAtComponent &)const;
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, LookAtDefinition>> &);
};
