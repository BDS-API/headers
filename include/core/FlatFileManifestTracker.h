#pragma once

#include "Path.h"
#include "FlatFileManifest.h"
#include <memory>


namespace Core {

    class FlatFileManifestTracker {

    public:
        void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool);
        void unloadAllManifests();
        ~FlatFileManifestTracker();
        void loadManifest(Core::Path const&);
        void tryUnloadManifest(Core::Path const&);
        void manifestExists(Core::Path const&)const;
        FlatFileManifestTracker();
        void updateManifests(Core::Path const&);
    };
}
