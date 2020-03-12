#pragma once

#include <memory>


class GeneticsDefinition {

public:
    static long DEFAULT_MUTATION_RATE;

    void _parseGeneticVariants(Json::Value &, GeneDefinition &);
    void addGeneDefinition(GeneDefinition const&);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>> &);
    GeneticsDefinition();
    void deserializeData(Json::Value &);
    ~GeneticsDefinition();
    void _parseGenes(Json::Value &);
    void initialize(EntityContext &, GeneticsComponent &);
    void serializeData(Json::Value &)const;
};
