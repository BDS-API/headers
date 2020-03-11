#pragma once

#include "../core/Path.h"


class WhitelistFile {

public:

    ~WhitelistFile();
    WhitelistFile(Core::Path const&);
    void reload();
    void getWhitelist()const;
    void syncToDisc();
};
