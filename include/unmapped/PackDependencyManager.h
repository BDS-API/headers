#pragma once

#include "../bedrock/pack/PackManifest"
#include "../bedrock/pack/PackSource"


class PackDependencyManager {

public:

    void getMissingDependencyIdentities(PackContentItem const*);
    void getMissingDependencyIdentities(PackSource const*, PackManifest const&);
    void packIsDependedUpon(PackManifest const&, PackManifest const&);
    bool hasMissingDependencies(PackContentItem const*);
    bool hasMissingDependencies(PackSource const*, PackManifest const&);
};
