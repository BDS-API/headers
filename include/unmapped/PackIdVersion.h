#pragma once

#include "SemVersion.h"
#include "../mce/UUID.h"
#include <string>


class PackIdVersion {

public:
    PackIdVersion(PackIdVersion const&);
    ~PackIdVersion();
    void operator!=(PackIdVersion const&)const;
    void operator<(PackIdVersion const&)const;
    void satisfies(PackIdVersion const&)const;
    void operator==(PackIdVersion const&)const;
//  PackIdVersion(mce::UUID const&, SemVersion const&, PackType); //TODO: incomplete function definition
//  PackIdVersion(std::string const&, std::string const&, PackType); //TODO: incomplete function definition
    PackIdVersion(PackIdVersion &&);
    std::string asString()const;
    void operator>(PackIdVersion const&)const;
    PackIdVersion();
};
