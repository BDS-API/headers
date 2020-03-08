#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/GeneticsComponent"


class GeneticsDefinition {

public:
    static long DEFAULT_MUTATION_RATE;


    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>> &);
    void addGeneDefinition(GeneDefinition const&);
    void initialize(EntityContext &, GeneticsComponent &);
    void deserializeData(Json::Value &);
    void _parseGenes(Json::Value &);
    void serializeData(Json::Value &)const;
    void _parseGeneticVariants(Json::Value &, GeneDefinition &);
    GeneticsDefinition(void);
};
