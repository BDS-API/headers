#pragma once

#include <utility>
#include "./Option.h"
#include "../json/Value.h"
#include <memory>
#include <vector>
#include <string>


class Vec3Option : Option {

public:
    virtual ~Vec3Option();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);
    virtual void load(Json::Value const&);

//  Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
//  void set(glm::tvec30<float, (glm::precision>); //TODO: incomplete function definition
    void getValue()const;
    void getDefault()const;
    void reset();
};
