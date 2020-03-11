#pragma once

#include <memory>
#include "./FlatFileManifest.h"
#include "./FlatFileManifestInfo.h"


namespace Core {

class FlatFileSearchResult {

public:

    FlatFileSearchResult();
    FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
    void getManifest()const;
    void getEntry()const;
    bool isEntryFound()const;
    ~FlatFileSearchResult();
};

}