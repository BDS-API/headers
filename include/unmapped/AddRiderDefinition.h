#pragma once

class AddRiderDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, AddRiderDefinition>> &);
    void initialize(EntityContext &, AddRiderComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    AddRiderDefinition(void);
};
