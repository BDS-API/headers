#pragma once

#include "./Certificate.h"
#include <string>


class ExtendedCertificate {

public:

    std::string getXuid(Certificate const&);
    std::string getIdentityName(Certificate const&);
    void getIdentity(Certificate const&);
};
