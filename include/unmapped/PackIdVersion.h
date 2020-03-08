#pragma once

#include "../mce/UUID"


class PackIdVersion {

public:

    PackIdVersion(PackIdVersion const&);
    PackIdVersion(PackIdVersion&&);
    PackIdVersion(void);
    PackIdVersion(std::string const&, std::string const&, PackType);
    PackIdVersion(mce::UUID const&, SemVersion const&, PackType);
    void satisfies(PackIdVersion const&)const;
};
