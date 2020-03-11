#pragma once

#include "../bedrock/pack/PackManifest.h"
#include "../bedrock/pack/PackSource.h"


class PackDependencyManager {

public:

//  void getMissingDependencyIdentities(PackContentItem const*); //TODO: incomplete function definition
    void getMissingDependencyIdentities(PackSource const*, PackManifest const&);
    void packIsDependedUpon(PackManifest const&, PackManifest const&);
//  bool hasMissingDependencies(PackContentItem const*); //TODO: incomplete function definition
    bool hasMissingDependencies(PackSource const*, PackManifest const&);
};
