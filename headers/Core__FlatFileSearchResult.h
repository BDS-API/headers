#pragma once

class Core::FlatFileSearchResult {

public:

    void FlatFileSearchResult(void);
    void FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
    void getManifest(void)const;
    void getEntry(void)const;
    bool isEntryFound(void)const;
};
