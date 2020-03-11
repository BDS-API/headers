#pragma once

#include "../../unmapped/SchedulerComponent.h"
#include <memory>
#include "../../unmapped/EntityContext.h"
#include "./SchedulerDefinition.h"
#include "../../json/Value.h"


class SchedulerDefinition {

public:

//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>> &); //TODO: incomplete function definition
    void setMinDelayTicks(float const&);
    void setMaxDelayTicks(float const&);
    void initialize(EntityContext &, SchedulerComponent &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void parseSchedule(Json::Value &);
    SchedulerDefinition();
    ~SchedulerDefinition();
};
