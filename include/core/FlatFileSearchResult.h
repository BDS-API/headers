#pragma once



using namespace Core;

class FlatFileSearchResult {

public:

    FlatFileSearchResult(void);
    FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
    void getManifest()const;
    void getEntry()const;
    bool isEntryFound()const;
};
