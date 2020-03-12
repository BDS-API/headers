#pragma once

#include <string>
#include <vector>
#include "Option.h"


class Vec3Option : Option {

public:
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
    virtual void load(Json::Value const&);
    virtual void load(std::string const&);
    ~Vec3Option();
    void getValue()const;
//  void set(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void getDefault()const;
//  Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void reset();
};
