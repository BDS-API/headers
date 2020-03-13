#pragma once

#include <string>


namespace CryptoUtils {

    std::string getFileChecksum(Core::Path const&); // _ZN11CryptoUtils15getFileChecksumB5cxx11ERKN4Core4PathE
    std::string getDirectroyChecksum(Core::Path const&); // _ZN11CryptoUtils20getDirectroyChecksumB5cxx11ERKN4Core4PathE
};
