#pragma once

class Vec3Option : Option {

public:
    virtual ~Vec3Option();
    virtual void save(std::vector<std::pair<std::string, std::string>, std::allocator<std::pair<std::string, std::string>>> &);
    virtual void load(std::string const&);
    virtual void load(Json::Value const&);

    void Vec3Option(OptionID, OptionOwnerType, OptionResetFlags, std::string const&, std::string const&, glm::tvec3<float, (glm::precision)0> const&);
    void set(glm::tvec3<float, (glm::precision)0> const&, bool);
    void getValue(void)const;
    void getDefault(void)const;
    void reset(void);
};
