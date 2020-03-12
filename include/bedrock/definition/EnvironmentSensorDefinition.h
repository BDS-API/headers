#pragma once

#include <memory>


class EnvironmentSensorDefinition {

public:
    void parseEnvironment(Json::Value &);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>> &);
    void addEnvironmentTrigger(DefinitionTrigger const&);
    EnvironmentSensorDefinition();
    void serializeData(Json::Value &)const;
    ~EnvironmentSensorDefinition();
    void deserializeData(Json::Value &);
};
