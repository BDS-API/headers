#pragma once

#include "FlatFileManifestInfo.h"
#include "FlatFileManifest.h"
#include <memory>


namespace Core {

    class FlatFileSearchResult {

    public:
        ~FlatFileSearchResult();
        FlatFileSearchResult();
        void getManifest()const;
        FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
        bool isEntryFound()const;
        void getEntry()const;
    };
}
