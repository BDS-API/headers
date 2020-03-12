#pragma once

#include <memory>


class SchedulerDefinition {

public:
    void serializeData(Json::Value &)const;
    void setMinDelayTicks(float const&);
    void initialize(EntityContext &, SchedulerComponent &);
    void parseSchedule(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, SchedulerDefinition>> &);
    void setMaxDelayTicks(float const&);
    ~SchedulerDefinition();
    void deserializeData(Json::Value &);
    SchedulerDefinition();
};
