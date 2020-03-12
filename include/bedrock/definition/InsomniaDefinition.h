#pragma once

#include <memory>


namespace InsomniaDefinition {

    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InsomniaDefinition>> &);
    void initialize(EntityContext &, InsomniaComponent &);
    void deserializeData(Json::Value &);
};
