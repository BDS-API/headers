#pragma once

#include <memory>


namespace Core {

    class FlatFileSearchResult {

    public:
        bool isEntryFound()const;
        ~FlatFileSearchResult();
        FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*);
        void getEntry()const;
        FlatFileSearchResult();
        void getManifest()const;
    };
}
