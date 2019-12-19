#pragma once

class BlockBreakSensorDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, BlockBreakSensorDefinition>> &);
    void initialize(EntityContext &, BlockBreakSensorComponent &);
    BlockBreakSensorDefinition(void);
};
