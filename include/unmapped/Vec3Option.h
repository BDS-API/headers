#pragma once

#include "../json/Value"


class Vec3Option : Option {

public:
    virtual Vec3Option::~Vec3Option()
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);
    virtual void load(Json::Value const&);

    Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, glm::tvec3<float, (glm::precision)0> const&);
    void set(glm::tvec30<float, (glm::precision>);
    void getValue()const;
    void getDefault()const;
    void reset();
};
