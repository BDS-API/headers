#pragma once

#include "../../json/Value"
#include "../../unmapped/EntityContext"
#include "../../unmapped/SchedulerComponent"


class SchedulerDefinition {

public:

    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>> &);
    void setMinDelayTicks(float const&);
    void setMaxDelayTicks(float const&);
    void initialize(EntityContext &, SchedulerComponent &);
    void serializeData(Json::Value &)const;
    void deserializeData(Json::Value &);
    void parseSchedule(Json::Value &);
    SchedulerDefinition(void);
};
