#pragma once

#include "../core/Path.h"


class WhitelistFile {

public:
    WhitelistFile(Core::Path const&);
    ~WhitelistFile();
    void syncToDisc();
    void reload();
    void getWhitelist()const;
};
