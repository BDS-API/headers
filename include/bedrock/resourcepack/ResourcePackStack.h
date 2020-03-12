#pragma once

#include "../../unmapped/PackInstance.h"
#include <vector>
#include <ostream>
#include <istream>
#include <functional>


class ResourcePackStack {

public:
    ~ResourcePackStack();
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
    bool hasPlatformLockedContent()const;
    void getStackAsIdentities()const;
    void generateAssetSet();
    void add(PackInstance, ResourcePackRepository const&, bool);
    void serialize(std::ostream &)const;
    bool hasRestrictedContent()const;
    ResourcePackStack(std::vector<ResourcePack *> const&, ResourcePackRepository const&);
    ResourcePackStack();
    void getLoadingReport()const;
    void removeDuplicates();
    bool isOnStack(PackIdVersion const&)const;
    void _populateDependencies(std::vector<PackInstance> &, PackInstance &, ResourcePackRepository const&, bool);
    void _setLoadingReport(ResourcePackRepository const&);
    void ensureSupportedSubpacks(ContentTierInfo const&);
    void mergePackReports(std::vector<PackReport> &);
    void clearPackReports();
//  bool hasCapabilityInStack(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void onLoadingFinished();
    void removeInvalidPacks();
    void removeIf(std::function<bool (PackInstance const&)> const&);
    void deserialize(std::istream &, ResourcePackRepository const&);
    void getSplitStacks(ResourcePackStack &, ResourcePackStack &)const;
    ResourcePackStack(std::vector<PackInstance> const&, ResourcePackRepository const&);
    ResourcePackStack(std::vector<PackInstanceId> const&, ResourcePackRepository const&, bool);
    bool canSupportPacks(ContentTierInfo const&)const;
    void removeUnsupportedPacks(ContentTierInfo const&);
    void _hasOneRestrictedPackAndNoUnrestrictedPacks(unsigned long, PackManifest const&);
};
