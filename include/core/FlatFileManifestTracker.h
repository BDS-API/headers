#pragma once



using namespace Core;

class FlatFileManifestTracker {

public:

    FlatFileManifestTracker(void);
    void updateManifests(Core::Path const&);
    void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool);
    void manifestExists(Core::Path const&)const;
    void loadManifest(Core::Path const&);
    void tryUnloadManifest(Core::Path const&);
    void unloadAllManifests();
};
