#pragma once

#include <memory>


class InteractDefinition {

public:
    void serializeData(Json::Value &)const;
    void deserializeInteraction(Json::Value &);
    void initialize(EntityContext &, InteractComponent &)const;
    void deserializeData(Json::Value &);
    void addInteraction(Interaction const&);
    ~InteractDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>> &);
    void serializeInteraction(Interaction const&, Json::Value &)const;
    InteractDefinition();
};
