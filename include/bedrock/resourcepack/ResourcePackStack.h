#pragma once

#include "../../unmapped/PackReport.h"
#include "ResourcePack.h"
#include "../pack/ResourcePackMergeStrategy.h"
#include "../../unmapped/PackInstance.h"
#include "../../unmapped/ContentTierInfo.h"
#include <functional>
#include "../pack/PackManifest.h"
#include <vector>
#include "ResourcePackRepository.h"
#include <istream>
#include "../../unmapped/PackInstanceId.h"
#include <ostream>
#include "../../unmapped/PackIdVersion.h"
#include "../../unmapped/ResourceLocation.h"


class ResourcePackStack {

public:
    virtual void loadAllVersionsOf(ResourceLocation const&, ResourcePackMergeStrategy &)const;
    virtual void loadAllVersionsOf(ResourceLocation const&)const;
    ~ResourcePackStack();
    void removeInvalidPacks();
    void clearPackReports();
    void onLoadingFinished();
    void _hasOneRestrictedPackAndNoUnrestrictedPacks(unsigned long, PackManifest const&);
    bool hasPlatformLockedContent()const;
    void add(PackInstance, ResourcePackRepository const&, bool);
    void _populateDependencies(std::vector<PackInstance> &, PackInstance &, ResourcePackRepository const&, bool);
    void mergePackReports(std::vector<PackReport> &);
    void removeIf(std::function<bool (PackInstance const&)> const&);
//  bool hasCapabilityInStack(gsl::basic_string_span<char const, -1l>)const; //TODO: incomplete function definition
    void removeUnsupportedPacks(ContentTierInfo const&);
    bool canSupportPacks(ContentTierInfo const&)const;
    ResourcePackStack(std::vector<PackInstanceId> const&, ResourcePackRepository const&, bool);
    ResourcePackStack(std::vector<ResourcePack *> const&, ResourcePackRepository const&);
    bool hasRestrictedContent()const;
    void getSplitStacks(ResourcePackStack &, ResourcePackStack &)const;
    void ensureSupportedSubpacks(ContentTierInfo const&);
    void generateAssetSet();
    void getLoadingReport()const;
    ResourcePackStack(std::vector<PackInstance> const&, ResourcePackRepository const&);
    bool isOnStack(PackIdVersion const&)const;
    void deserialize(std::istream &, ResourcePackRepository const&);
    void removeDuplicates();
    ResourcePackStack();
    void serialize(std::ostream &)const;
    void getStackAsIdentities()const;
    void _setLoadingReport(ResourcePackRepository const&);
};
