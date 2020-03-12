#pragma once

#include <string>


class ActorMapping {

public:
    void getCanonicalName()const;
    ActorMapping(ActorMapping &&);
    ActorMapping(std::string const&, std::string const&, std::string const&);
    ~ActorMapping();
    ActorMapping(ActorMapping const&);
    ActorMapping(std::string const&, std::string const&);
//  std::string getMappingName(ActorTypeNamespaceRules)const; //TODO: incomplete function definition
};
