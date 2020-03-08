#pragma once

#include "../../unmapped/DamageSensorTrigger"
#include "../../unmapped/DamageSensorComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


class DamageSensorDefinition {

public:

    DamageSensorDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition>> &);
    void addDamageSensorTrigger(DamageSensorTrigger const&);
    void initialize(EntityContext &, DamageSensorComponent &)const;
    void uninitialize(EntityContext &, DamageSensorComponent &)const;
    void deserializeData(Json::Value &);
    void deserializeTrigger(Json::Value &);
    void serializeData(Json::Value &)const;
    void serializeTrigger(DamageSensorTrigger const&, Json::Value &)const;
};
