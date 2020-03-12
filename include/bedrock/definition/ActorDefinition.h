#pragma once

#include <string>
#include "../../json/Value.h"


class ActorDefinition {

public:
    ~ActorDefinition();
    void parseAttributes(Json::Value &, ActorDefinitionDescriptor &);
    void getComponentDefinitionGroup()const;
    void parseEntityDescription(Json::Value &);
    ActorDefinition(std::string const&);
    void initEntityDefinitions();
    void parse(Json::Value, ActorDefinitionDescriptor &);
};
