#pragma once

#include "../mce/UUID.h"
#include "./PackIdVersion.h"
#include "./SemVersion.h"
#include <string>


class PackIdVersion {

public:

    ~PackIdVersion();
    PackIdVersion(PackIdVersion const&);
    PackIdVersion(PackIdVersion &&);
    PackIdVersion();
//  PackIdVersion(std::string const&, std::string const&, PackType); //TODO: incomplete function definition
//  PackIdVersion(mce::UUID const&, SemVersion const&, PackType); //TODO: incomplete function definition
    void operator==(PackIdVersion const&)const;
    void operator!=(PackIdVersion const&)const;
    void operator<(PackIdVersion const&)const;
    void operator>(PackIdVersion const&)const;
    void satisfies(PackIdVersion const&)const;
    std::string asString()const;
};
