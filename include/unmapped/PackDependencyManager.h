#pragma once



namespace PackDependencyManager {

//  void getMissingDependencyIdentities(PackContentItem const*); //TODO: incomplete function definition // _ZN21PackDependencyManager30getMissingDependencyIdentitiesEPK15PackContentItem
    void getMissingDependencyIdentities(PackSource const*, PackManifest const&); // _ZN21PackDependencyManager30getMissingDependencyIdentitiesEPK10PackSourceRK12PackManifest
    void packIsDependedUpon(PackManifest const&, PackManifest const&); // _ZN21PackDependencyManager18packIsDependedUponERK12PackManifestS2_
//  bool hasMissingDependencies(PackContentItem const*); //TODO: incomplete function definition // _ZN21PackDependencyManager22hasMissingDependenciesEPK15PackContentItem
    bool hasMissingDependencies(PackSource const*, PackManifest const&); // _ZN21PackDependencyManager22hasMissingDependenciesEPK10PackSourceRK12PackManifest
};
