#pragma once

#include "../../unmapped/SchedulerComponent"
#include "../../json/Value"
#include "../../unmapped/EntityContext"


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
