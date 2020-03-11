#pragma once

#include <memory>
#include "./FlatFileManifest.h"
#include "./Path.h"


namespace Core {

class FlatFileManifestTracker {

public:

    FlatFileManifestTracker();
    ~FlatFileManifestTracker();
    void updateManifests(Core::Path const&);
    void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool);
    void manifestExists(Core::Path const&)const;
    void loadManifest(Core::Path const&);
    void tryUnloadManifest(Core::Path const&);
    void unloadAllManifests();
};

}