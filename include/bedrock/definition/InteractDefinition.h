#pragma once

#include "../../unmapped/InteractComponent.h"
#include "../../json/Value.h"
#include "../../unmapped/Interaction.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class InteractDefinition {

public:
    InteractDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>> &); //TODO: incomplete function definition
    void addInteraction(Interaction const&);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    ~InteractDefinition();
    void deserializeInteraction(Json::Value &);
    void initialize(EntityContext &, InteractComponent &)const;
    void serializeInteraction(Interaction const&, Json::Value &)const;
};
