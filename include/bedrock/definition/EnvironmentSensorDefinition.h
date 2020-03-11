#pragma once

#include "./DefinitionTrigger.h"
#include <memory>
#include "./EnvironmentSensorDefinition.h"
#include "../../json/Value.h"


class EnvironmentSensorDefinition {

public:

    EnvironmentSensorDefinition();
    ~EnvironmentSensorDefinition();
//  void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>> &); //TODO: incomplete function definition
    void addEnvironmentTrigger(DefinitionTrigger const&);
    void deserializeData(Json::Value &);
    void parseEnvironment(Json::Value &);
    void serializeData(Json::Value &)const;
};
