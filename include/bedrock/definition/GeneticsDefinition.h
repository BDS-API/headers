#pragma once

#include "./GeneticsDefinition.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./GeneDefinition.h"
#include "../../unmapped/GeneticsComponent.h"
#include "../../json/Value.h"


class GeneticsDefinition {

public:
    static long DEFAULT_MUTATION_RATE;


//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, GeneticsDefinition>> &); //TODO: incomplete function definition
    void addGeneDefinition(GeneDefinition const&);
    void initialize(EntityContext &, GeneticsComponent &);
    void deserializeData(Json::Value &);
    void _parseGenes(Json::Value &);
    void serializeData(Json::Value &)const;
    void _parseGeneticVariants(Json::Value &, GeneDefinition &);
    GeneticsDefinition();
    ~GeneticsDefinition();
};
