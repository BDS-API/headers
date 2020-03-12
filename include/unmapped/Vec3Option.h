#pragma once

#include <string>
#include "Option.h"
#include "../json/Value.h"
#include <vector>
#include <utility>


class Vec3Option : Option {

public:
    virtual void load(Json::Value const&);
    ~Vec3Option();
    virtual void load(std::string const&);
    virtual void save(std::vector<std::pair<std::string, std::string>> &);
//  void set(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void getDefault()const;
//  Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void getValue()const;
    void reset();
};
