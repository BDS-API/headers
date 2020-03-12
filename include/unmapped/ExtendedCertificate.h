#pragma once

#include "Certificate.h"


namespace ExtendedCertificate {

    std::string getXuid(Certificate const&);
    std::string getIdentityName(Certificate const&);
    void getIdentity(Certificate const&);
};
