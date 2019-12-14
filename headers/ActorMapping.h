#pragma once

class ActorMapping {

public:

    void ActorMapping(std::string const&, std::string const&);
    void getCanonicalName(void)const;
    void ActorMapping(std::string const&, std::string const&, std::string const&);
    void ActorMapping(ActorMapping&&);
    void ActorMapping(ActorMapping const&);
};
