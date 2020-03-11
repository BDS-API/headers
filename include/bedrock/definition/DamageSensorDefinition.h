#pragma once

#include "../../unmapped/DamageSensorTrigger.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../unmapped/DamageSensorComponent.h"
#include "./DamageSensorDefinition.h"
#include "../../json/Value.h"


class DamageSensorDefinition {

public:

    DamageSensorDefinition();
    ~DamageSensorDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, DamageSensorDefinition>> &); //TODO: incomplete function definition
    void addDamageSensorTrigger(DamageSensorTrigger const&);
    void initialize(EntityContext &, DamageSensorComponent &)const;
    void uninitialize(EntityContext &, DamageSensorComponent &)const;
    void deserializeData(Json::Value &);
    void deserializeTrigger(Json::Value &);
    void serializeData(Json::Value &)const;
    void serializeTrigger(DamageSensorTrigger const&, Json::Value &)const;
};
