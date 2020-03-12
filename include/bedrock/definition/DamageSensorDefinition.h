#pragma once

#include <memory>


class DamageSensorDefinition {

public:
    ~DamageSensorDefinition();
    DamageSensorDefinition();
    void deserializeTrigger(Json::Value &);
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition>> &);
    void uninitialize(EntityContext &, DamageSensorComponent &)const;
    void serializeTrigger(DamageSensorTrigger const&, Json::Value &)const;
    void initialize(EntityContext &, DamageSensorComponent &)const;
    void addDamageSensorTrigger(DamageSensorTrigger const&);
};
