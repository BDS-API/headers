#pragma once

#include "../../unmapped/DamageSensorComponent.h"
#include "../../json/Value.h"
#include "../../unmapped/DamageSensorTrigger.h"
#include <memory>
#include "../../unmapped/EntityContext.h"


class DamageSensorDefinition {

public:
    void uninitialize(EntityContext &, DamageSensorComponent &)const;
    void deserializeData(Json::Value &);
    void addDamageSensorTrigger(DamageSensorTrigger const&);
    void serializeData(Json::Value &)const;
    DamageSensorDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition>> &); //TODO: incomplete function definition
    void serializeTrigger(DamageSensorTrigger const&, Json::Value &)const;
    void deserializeTrigger(Json::Value &);
    void initialize(EntityContext &, DamageSensorComponent &)const;
    ~DamageSensorDefinition();
};
