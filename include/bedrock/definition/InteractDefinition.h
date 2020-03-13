#pragma once

#include <memory>


class InteractDefinition {

public:
    InteractDefinition(); // _ZN18InteractDefinitionC2Ev
    ~InteractDefinition(); // _ZN18InteractDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, InteractDefinition>> &); // _ZN18InteractDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addInteraction(Interaction const&); // _ZN18InteractDefinition14addInteractionERK11Interaction
    void initialize(EntityContext &, InteractComponent &)const; // _ZNK18InteractDefinition10initializeER13EntityContextR17InteractComponent
    void deserializeData(Json::Value &); // _ZN18InteractDefinition15deserializeDataERN4Json5ValueE
    void deserializeInteraction(Json::Value &); // _ZN18InteractDefinition22deserializeInteractionERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18InteractDefinition13serializeDataERN4Json5ValueE
    void serializeInteraction(Interaction const&, Json::Value &)const; // _ZNK18InteractDefinition20serializeInteractionERK11InteractionRN4Json5ValueE
};
