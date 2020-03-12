#pragma once

#include <memory>
#include "../../unmapped/EntityContext.h"
#include "../../json/Value.h"
#include "../../unmapped/SchedulerComponent.h"


class SchedulerDefinition {

public:
    SchedulerDefinition();
    void deserializeData(Json::Value &);
    void parseSchedule(Json::Value &);
    ~SchedulerDefinition();
    void setMinDelayTicks(float const&);
    void initialize(EntityContext &, SchedulerComponent &);
    void setMaxDelayTicks(float const&);
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>> &); //TODO: incomplete function definition
    void serializeData(Json::Value &)const;
};
