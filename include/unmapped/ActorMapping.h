#pragma once



class ActorMapping {

public:

    ActorMapping(std::string const&, std::string const&);
    void getCanonicalName(void)const;
    ActorMapping(std::string const&, std::string const&, std::string const&);
    ActorMapping(ActorMapping&&);
    ActorMapping(ActorMapping const&);
};
