#pragma once

#include "./ActorMapping.h"
#include <string>


class ActorMapping {

public:

    ActorMapping(std::string const&, std::string const&);
    ~ActorMapping();
//  std::string getMappingName(ActorTypeNamespaceRules)const; //TODO: incomplete function definition
    void getCanonicalName()const;
    ActorMapping(std::string const&, std::string const&, std::string const&);
    ActorMapping(ActorMapping &&);
    ActorMapping(ActorMapping const&);
};
