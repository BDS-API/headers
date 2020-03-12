#pragma once

#include "../core/Path.h"


namespace CryptoUtils {

    std::string getDirectroyChecksum(Core::Path const&);
    std::string getFileChecksum(Core::Path const&);
};
