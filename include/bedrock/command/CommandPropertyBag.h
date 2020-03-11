#pragma once

#include "../util/BlockPos.h"
#include "../../json/Value.h"
#include "../util/Vec3.h"
#include <string>


class CommandPropertyBag {

public:
    virtual ~CommandPropertyBag();

    CommandPropertyBag();
    CommandPropertyBag(Json::Value const&);
    void clone()const;
    void set(std::string const&, Json::Value const&);
    void set(std::string const&, BlockPos const&);
    void set(std::string const&, Vec3);
    void addToResultList(std::string const&, std::string const&);
};
