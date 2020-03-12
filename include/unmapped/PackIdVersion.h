#pragma once

#include <string>


class PackIdVersion {

public:
    PackIdVersion(PackIdVersion const&);
    void satisfies(PackIdVersion const&)const;
//  PackIdVersion(mce::UUID const&, SemVersion const&, PackType); //TODO: incomplete function definition
    ~PackIdVersion();
    void operator==(PackIdVersion const&)const;
    void operator!=(PackIdVersion const&)const;
    void operator>(PackIdVersion const&)const;
    std::string asString()const;
    PackIdVersion();
//  PackIdVersion(std::string const&, std::string const&, PackType); //TODO: incomplete function definition
    PackIdVersion(PackIdVersion &&);
    void operator<(PackIdVersion const&)const;
};
