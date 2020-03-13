#pragma once

#include <memory>


class GeneticsDefinition {

public:
    static long DEFAULT_MUTATION_RATE;

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>> &); // _ZN18GeneticsDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addGeneDefinition(GeneDefinition const&); // _ZN18GeneticsDefinition17addGeneDefinitionERK14GeneDefinition
    void initialize(EntityContext &, GeneticsComponent &); // _ZN18GeneticsDefinition10initializeER13EntityContextR17GeneticsComponent
    void deserializeData(Json::Value &); // _ZN18GeneticsDefinition15deserializeDataERN4Json5ValueE
    void _parseGenes(Json::Value &); // _ZN18GeneticsDefinition11_parseGenesERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK18GeneticsDefinition13serializeDataERN4Json5ValueE
    void _parseGeneticVariants(Json::Value &, GeneDefinition &); // _ZN18GeneticsDefinition21_parseGeneticVariantsERN4Json5ValueER14GeneDefinition
    GeneticsDefinition(); // _ZN18GeneticsDefinitionC2Ev
    ~GeneticsDefinition(); // _ZN18GeneticsDefinitionD2Ev
};
