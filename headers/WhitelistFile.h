#pragma once

class WhitelistFile {

public:

    void WhitelistFile(Core::Path const&);
    void reload(void);
    void getWhitelist(void)const;
    void syncToDisc(void);
};
