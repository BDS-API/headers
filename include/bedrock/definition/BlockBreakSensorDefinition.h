#pragma once

#include "../../unmapped/EntityContext.h"
#include "../block/unmapped/BlockBreakSensorComponent.h"
#include <memory>


class BlockBreakSensorDefinition {

public:
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>> &); //TODO: incomplete function definition
    ~BlockBreakSensorDefinition();
    BlockBreakSensorDefinition();
    void initialize(EntityContext &, BlockBreakSensorComponent &);
};
