#pragma once



using namespace Core;

class FlatFileSearchResult {

public:

    FlatFileSearchResult(void);
    FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
    void getManifest(void)const;
    void getEntry(void)const;
    bool isEntryFound(void)const;
};
