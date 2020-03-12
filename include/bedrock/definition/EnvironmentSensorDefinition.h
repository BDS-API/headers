#pragma once

#include "../../json/Value.h"
#include "DefinitionTrigger.h"
#include <memory>


class EnvironmentSensorDefinition {

public:
    void deserializeData(Json::Value &);
    void serializeData(Json::Value &)const;
    void addEnvironmentTrigger(DefinitionTrigger const&);
    EnvironmentSensorDefinition();
    void parseEnvironment(Json::Value &);
    ~EnvironmentSensorDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>> &); //TODO: incomplete function definition
};
