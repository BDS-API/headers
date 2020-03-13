#pragma once

#include <vector>
#include <ostream>
#include <istream>
#include <functional>
#include "../../unmapped/PackInstance.h"


class ResourcePackStack {

public:
    ~ResourcePackStack(); // _ZN17ResourcePackStackD2Ev
    virtual void loadAllVersionsOf(ResourceLocation const&)const; // _ZNK17ResourcePackStack17loadAllVersionsOfERK16ResourceLocation
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const; // _ZNK17ResourcePackStack17loadAllVersionsOfERK16ResourceLocationR25ResourcePackMergeStrategy
    ResourcePackStack(); // _ZN17ResourcePackStackC2Ev
    ResourcePackStack(std::vector<PackInstance> const&, ResourcePackRepository const&); // _ZN17ResourcePackStackC2ERKSt6vectorI12PackInstanceSaIS1_EERK22ResourcePackRepository
    void _hasOneRestrictedPackAndNoUnrestrictedPacks(unsigned long, PackManifest const&); // _ZN17ResourcePackStack43_hasOneRestrictedPackAndNoUnrestrictedPacksEmRK12PackManifest
    void add(PackInstance, ResourcePackRepository const&, bool); // _ZN17ResourcePackStack3addE12PackInstanceRK22ResourcePackRepositoryb
    void _setLoadingReport(ResourcePackRepository const&); // _ZN17ResourcePackStack17_setLoadingReportERK22ResourcePackRepository
    ResourcePackStack(std::vector<PackInstanceId> const&, ResourcePackRepository const&, bool); // _ZN17ResourcePackStackC2ERKSt6vectorI14PackInstanceIdSaIS1_EERK22ResourcePackRepositoryb
    ResourcePackStack(std::vector<ResourcePack *> const&, ResourcePackRepository const&); // _ZN17ResourcePackStackC2ERKSt6vectorIP12ResourcePackSaIS2_EERK22ResourcePackRepository
    void _populateDependencies(std::vector<PackInstance> &, PackInstance &, ResourcePackRepository const&, bool); // _ZN17ResourcePackStack21_populateDependenciesERSt6vectorI12PackInstanceSaIS1_EERS1_RK22ResourcePackRepositoryb
    void deserialize(std::istream &, ResourcePackRepository const&); // _ZN17ResourcePackStack11deserializeERSiRK22ResourcePackRepository
    void serialize(std::ostream &)const; // _ZNK17ResourcePackStack9serializeERSo
    void getSplitStacks(ResourcePackStack &, ResourcePackStack &)const; // _ZNK17ResourcePackStack14getSplitStacksERS_S0_
    void getStackAsIdentities()const; // _ZNK17ResourcePackStack20getStackAsIdentitiesEv
    bool hasPlatformLockedContent()const; // _ZNK17ResourcePackStack24hasPlatformLockedContentEv
    bool hasRestrictedContent()const; // _ZNK17ResourcePackStack20hasRestrictedContentEv
    bool isOnStack(PackIdVersion const&)const; // _ZNK17ResourcePackStack9isOnStackERK13PackIdVersion
    void getLoadingReport()const; // _ZNK17ResourcePackStack16getLoadingReportEv
    void clearPackReports(); // _ZN17ResourcePackStack16clearPackReportsEv
    void mergePackReports(std::vector<PackReport> &); // _ZN17ResourcePackStack16mergePackReportsERSt6vectorI10PackReportSaIS1_EE
    void removeDuplicates(); // _ZN17ResourcePackStack16removeDuplicatesEv
    void removeIf(std::function<bool (PackInstance const&)> const&); // _ZN17ResourcePackStack8removeIfERKSt8functionIFbRK12PackInstanceEE
    void ensureSupportedSubpacks(ContentTierInfo const&); // _ZN17ResourcePackStack23ensureSupportedSubpacksERK15ContentTierInfo
//  bool hasCapabilityInStack(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition // _ZNK17ResourcePackStack20hasCapabilityInStackEN3gsl17basic_string_spanIKcLln1EEE
    void generateAssetSet(); // _ZN17ResourcePackStack16generateAssetSetEv
    bool canSupportPacks(ContentTierInfo const&)const; // _ZNK17ResourcePackStack15canSupportPacksERK15ContentTierInfo
    void removeUnsupportedPacks(ContentTierInfo const&); // _ZN17ResourcePackStack22removeUnsupportedPacksERK15ContentTierInfo
    void removeInvalidPacks(); // _ZN17ResourcePackStack18removeInvalidPacksEv
    void onLoadingFinished(); // _ZN17ResourcePackStack17onLoadingFinishedEv
};
