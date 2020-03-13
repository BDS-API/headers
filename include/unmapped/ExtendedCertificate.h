#pragma once

#include <string>


namespace ExtendedCertificate {

    std::string getXuid(Certificate const&); // _ZN19ExtendedCertificate7getXuidB5cxx11ERK11Certificate
    std::string getIdentityName(Certificate const&); // _ZN19ExtendedCertificate15getIdentityNameB5cxx11ERK11Certificate
    void getIdentity(Certificate const&); // _ZN19ExtendedCertificate11getIdentityERK11Certificate
};
