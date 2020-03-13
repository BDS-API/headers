#pragma once

#include <memory>


namespace Core {

    class FlatFileSearchResult {

    public:
        FlatFileSearchResult(); // _ZN4Core20FlatFileSearchResultC2Ev
        FlatFileSearchResult(std::shared_ptr<Core::FlatFileManifest const>, Core::FlatFileManifestInfo const*); // _ZN4Core20FlatFileSearchResultC2ESt10shared_ptrIKNS_16FlatFileManifestEEPKNS_20FlatFileManifestInfoE
        void getManifest()const; // _ZNK4Core20FlatFileSearchResult11getManifestEv
        void getEntry()const; // _ZNK4Core20FlatFileSearchResult8getEntryEv
        bool isEntryFound()const; // _ZNK4Core20FlatFileSearchResult12isEntryFoundEv
        ~FlatFileSearchResult(); // _ZN4Core20FlatFileSearchResultD2Ev
    };
}
