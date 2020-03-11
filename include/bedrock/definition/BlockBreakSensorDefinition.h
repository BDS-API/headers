#pragma once

#include <memory>
#include "../block/unmapped/BlockBreakSensorComponent.h"
#include "../../unmapped/EntityContext.h"
#include "./BlockBreakSensorDefinition.h"


class BlockBreakSensorDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>> &); //TODO: incomplete function definition
    void initialize(EntityContext &, BlockBreakSensorComponent &);
    BlockBreakSensorDefinition();
    ~BlockBreakSensorDefinition();
};
