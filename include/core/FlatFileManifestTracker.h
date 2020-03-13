#pragma once

#include <memory>


namespace Core {

    class FlatFileManifestTracker {

    public:
        FlatFileManifestTracker(); // _ZN4Core23FlatFileManifestTrackerC2Ev
        ~FlatFileManifestTracker(); // _ZN4Core23FlatFileManifestTrackerD2Ev
        void updateManifests(Core::Path const&); // _ZN4Core23FlatFileManifestTracker15updateManifestsERKNS_4PathE
        void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool); // _ZN4Core23FlatFileManifestTracker14updateManifestESt10shared_ptrINS_16FlatFileManifestEEb
        void manifestExists(Core::Path const&)const; // _ZNK4Core23FlatFileManifestTracker14manifestExistsERKNS_4PathE
        void loadManifest(Core::Path const&); // _ZN4Core23FlatFileManifestTracker12loadManifestERKNS_4PathE
        void tryUnloadManifest(Core::Path const&); // _ZN4Core23FlatFileManifestTracker17tryUnloadManifestERKNS_4PathE
        void unloadAllManifests(); // _ZN4Core23FlatFileManifestTracker18unloadAllManifestsEv
    };
}
