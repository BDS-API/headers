#pragma once

#include "../core/Path"


class WhitelistFile {

public:

    WhitelistFile(Core::Path const&);
    void reload();
    void getWhitelist()const;
    void syncToDisc();
};
