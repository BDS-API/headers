#pragma once

class EnvironmentSensorDefinition {

public:

    void EnvironmentSensorDefinition(void);
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, EnvironmentSensorDefinition>> &);
    void addEnvironmentTrigger(DefinitionTrigger const&);
    void deserializeData(Json::Value &);
    void parseEnvironment(Json::Value &);
    void serializeData(Json::Value &)const;
};
