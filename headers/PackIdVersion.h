#pragma once

class PackIdVersion {

public:

    void PackIdVersion(PackIdVersion const&);
    void PackIdVersion(PackIdVersion&&);
    void PackIdVersion(void);
    void PackIdVersion(std::string const&, std::string const&, PackType);
    void PackIdVersion(mce::UUID const&, SemVersion const&, PackType);
    void satisfies(PackIdVersion const&)const;
};
