#pragma once



namespace PackDependencyManager {

//  void getMissingDependencyIdentities(PackContentItem const*); //TODO: incomplete function definition
    void packIsDependedUpon(PackManifest const&, PackManifest const&);
//  bool hasMissingDependencies(PackContentItem const*); //TODO: incomplete function definition
    void getMissingDependencyIdentities(PackSource const*, PackManifest const&);
    bool hasMissingDependencies(PackSource const*, PackManifest const&);
};
