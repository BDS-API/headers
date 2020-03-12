#pragma once

#include "../../unmapped/GeneticsComponent.h"
#include "../../json/Value.h"
#include "GeneDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class GeneticsDefinition {

public:
    static long DEFAULT_MUTATION_RATE;

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, GeneticsComponent &);
    GeneticsDefinition();
    void _parseGeneticVariants(Json::Value &, GeneDefinition &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void _parseGenes(Json::Value &);
    ~GeneticsDefinition();
    void addGeneDefinition(GeneDefinition const&);
};
