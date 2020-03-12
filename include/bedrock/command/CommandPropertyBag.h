#pragma once

#include <string>
#include "../util/Vec3.h"
#include "../../json/Value.h"
#include "../util/BlockPos.h"


class CommandPropertyBag {

public:
    ~CommandPropertyBag();
    CommandPropertyBag();
    void set(std::string const&, Vec3);
    void addToResultList(std::string const&, std::string const&);
    CommandPropertyBag(Json::Value const&);
    void set(std::string const&, BlockPos const&);
    void set(std::string const&, Json::Value const&);
    void clone()const;
};
