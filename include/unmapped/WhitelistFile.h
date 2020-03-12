#pragma once



class WhitelistFile {

public:
    void syncToDisc();
    void reload();
    WhitelistFile(Core::Path const&);
    ~WhitelistFile();
    void getWhitelist()const;
};
