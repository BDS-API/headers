#pragma once

#include <string>


class ActorMapping {

public:
    ActorMapping(ActorMapping &&);
    ~ActorMapping();
    ActorMapping(ActorMapping const&);
    ActorMapping(std::string const&, std::string const&, std::string const&);
//  std::string getMappingName(ActorTypeNamespaceRules)const; //TODO: incomplete function definition
    void getCanonicalName()const;
    ActorMapping(std::string const&, std::string const&);
};
