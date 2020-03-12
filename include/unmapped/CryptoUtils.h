#pragma once

#include <string>


namespace CryptoUtils {

    std::string getDirectroyChecksum(Core::Path const&);
    std::string getFileChecksum(Core::Path const&);
};
