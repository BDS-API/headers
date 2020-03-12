#pragma once

#include <string>
#include "../util/Vec3.h"


class CommandPropertyBag {

public:
    ~CommandPropertyBag();
    void addToResultList(std::string const&, std::string const&);
    void set(std::string const&, Json::Value const&);
    void set(std::string const&, Vec3);
    CommandPropertyBag(Json::Value const&);
    void set(std::string const&, BlockPos const&);
    void clone()const;
    CommandPropertyBag();
};
