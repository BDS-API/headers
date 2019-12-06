#pragma once

class Core::FlatFileManifestTracker {

public:

    void FlatFileManifestTracker(void);
    void updateManifests(Core::Path const&);
    void updateManifest(std::shared_ptr<Core::FlatFileManifest>, bool);
    void manifestExists(Core::Path const&)const;
    void loadManifest(Core::Path const&);
    void tryUnloadManifest(Core::Path const&);
    void unloadAllManifests(void);
};
