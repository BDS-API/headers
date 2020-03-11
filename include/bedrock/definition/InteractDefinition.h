#pragma once

#include "../../unmapped/Interaction.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/InteractComponent.h"
#include "./InteractDefinition.h"
#include "../../json/Value.h"


class InteractDefinition {

public:

    InteractDefinition();
    ~InteractDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>> &); //TODO: incomplete function definition
    void addInteraction(Interaction const&);
    void initialize(EntityContext &, InteractComponent &)const;
    void deserializeData(Json::Value &);
    void deserializeInteraction(Json::Value &);
    void serializeData(Json::Value &)const;
    void serializeInteraction(Interaction const&, Json::Value &)const;
};
