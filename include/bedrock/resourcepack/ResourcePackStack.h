#pragma once

#include "../../unmapped/PackInstanceId"
#include "../pack/ResourcePackMergeStrategy"
#include "../../unmapped/ResourceLocation"
#include "../../unmapped/PackInstance"
#include "../../unmapped/PackReport"
#include "../pack/PackManifest"
#include "../../unmapped/PackIdVersion"
#include "../../unmapped/ContentTierInfo"


class ResourcePackStack {

public:
    virtual ResourcePackStack::~ResourcePackStack()
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;

    ResourcePackStack(void);
    ResourcePackStack(std::vector<PackInstance, std::allocator<PackInstance>> const&, ResourcePackRepository const&);
    void _hasOneRestrictedPackAndNoUnrestrictedPacks(unsigned long, PackManifest const&);
    void add(PackInstance, ResourcePackRepository const&, bool);
    void _setLoadingReport(ResourcePackRepository const&);
    ResourcePackStack(std::vector<PackInstanceId, std::allocator<PackInstanceId>> const&, ResourcePackRepository const&, bool);
    ResourcePackStack(std::vector<ResourcePack *, std::allocator<ResourcePack *>> const&, ResourcePackRepository const&);
    void _populateDependencies(std::vector<PackInstance, std::allocator<PackInstance>> &, PackInstance&, ResourcePackRepository const&, bool);
    void deserialize(std::istream &, ResourcePackRepository const&);
    void serialize(std::ostream &)const;
    void getSplitStacks(ResourcePackStack&, ResourcePackStack&)const;
    void getStackAsIdentities()const;
    bool hasPlatformLockedContent()const;
    bool hasRestrictedContent()const;
    bool isOnStack(PackIdVersion const&)const;
    void getLoadingReport()const;
    void clearPackReports();
    void mergePackReports(std::vector<PackReport, std::allocator<PackReport>> &);
    void removeDuplicates();
    void removeIf(std::function<bool ()(PackInstance const&)> const&);
    void ensureSupportedSubpacks(ContentTierInfo const&);
    bool hasCapabilityInStack(gsl::basic_string_span<char const, -1l>)const;
    void generateAssetSet();
    bool canSupportPacks(ContentTierInfo const&)const;
    void removeUnsupportedPacks(ContentTierInfo const&);
    void removeInvalidPacks();
    void onLoadingFinished();
};
