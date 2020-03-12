#pragma once

#include <memory>


namespace Core {

    class FlatFileManifestTracker {

    public:
        void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool);
        ~FlatFileManifestTracker();
        void loadManifest(Core::Path const&);
        void tryUnloadManifest(Core::Path const&);
        void unloadAllManifests();
        void updateManifests(Core::Path const&);
        FlatFileManifestTracker();
        void manifestExists(Core::Path const&)const;
    };
}
