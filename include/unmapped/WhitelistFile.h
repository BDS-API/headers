#pragma once



class WhitelistFile {

public:
    ~WhitelistFile(); // _ZN13WhitelistFileD2Ev
    WhitelistFile(Core::Path const&); // _ZN13WhitelistFileC2ERKN4Core4PathE
    void reload(); // _ZN13WhitelistFile6reloadEv
    void getWhitelist()const; // _ZNK13WhitelistFile12getWhitelistEv
    void syncToDisc(); // _ZN13WhitelistFile10syncToDiscEv
};
