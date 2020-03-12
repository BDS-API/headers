#pragma once

#include "../bedrock/pack/PackSource.h"
#include "../bedrock/pack/PackManifest.h"


namespace PackDependencyManager {

    bool hasMissingDependencies(PackSource const*, PackManifest const&);
    void packIsDependedUpon(PackManifest const&, PackManifest const&);
    void getMissingDependencyIdentities(PackSource const*, PackManifest const&);
//  void getMissingDependencyIdentities(PackContentItem const*); //TODO: incomplete function definition
//  bool hasMissingDependencies(PackContentItem const*); //TODO: incomplete function definition
};
