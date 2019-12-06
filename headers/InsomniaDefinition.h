#pragma once

class InsomniaDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition>> &);
    void initialize(EntityContext &, InsomniaComponent &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
};
