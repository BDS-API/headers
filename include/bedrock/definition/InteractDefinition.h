#pragma once

#include "../../unmapped/InteractComponent"
#include "../../unmapped/Interaction"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class InteractDefinition {

public:

    InteractDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>> &);
    void addInteraction(Interaction const&);
    void initialize(EntityContext &, InteractComponent &)const;
    void deserializeData(Json::Value &);
    void deserializeInteraction(Json::Value &);
    void serializeData(Json::Value &)const;
    void serializeInteraction(Interaction const&, Json::Value &)const;
};
