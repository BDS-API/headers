#pragma once

#include "../util/Vec3"
#include "../../json/Value"
#include "../util/BlockPos"


class CommandPropertyBag {

public:
    virtual CommandPropertyBag::~CommandPropertyBag()

    CommandPropertyBag(void);
    CommandPropertyBag(Json::Value const&);
    void clone()const;
    void set(std::string const&, Json::Value const&);
    void set(std::string const&, BlockPos const&);
    void set(std::string const&, Vec3);
    void addToResultList(std::string const&, std::string const&);
};
