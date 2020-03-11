#pragma once

#include "../core/Path.h"
#include <string>


class CryptoUtils {

public:

    std::string getFileChecksum(Core::Path const&);
    std::string getDirectroyChecksum(Core::Path const&);
};
