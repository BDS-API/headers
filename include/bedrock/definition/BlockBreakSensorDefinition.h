#pragma once

#include <memory>


class BlockBreakSensorDefinition {

public:
    BlockBreakSensorDefinition();
    void initialize(EntityContext &, BlockBreakSensorComponent &);
    ~BlockBreakSensorDefinition();
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>> &);
};
