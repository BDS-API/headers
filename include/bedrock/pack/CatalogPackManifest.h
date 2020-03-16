#pragma once

#include <string>
#include "PackManifest.h"


class CatalogPackManifest : public PackManifest {

public:
    virtual ~CatalogPackManifest(); // _ZN19CatalogPackManifestD2Ev
    virtual void __fake_function0(); // fake
    virtual void clone()const; // _ZNK19CatalogPackManifest5cloneEv
    CatalogPackManifest(); // _ZN19CatalogPackManifestC2Ev
    void setProductId(std::string); // _ZN19CatalogPackManifest12setProductIdENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getProductId()const; // _ZNK19CatalogPackManifest12getProductIdB5cxx11Ev
//    void setMinimumPerformanceRequirements(long); //TODO: incomplete function definition // _ZN19CatalogPackManifest33setMinimumPerformanceRequirementsE18DlcPerformanceTier
    void getMinimumPerformanceRequirements()const; // _ZNK19CatalogPackManifest33getMinimumPerformanceRequirementsEv
    CatalogPackManifest(CatalogPackManifest const&); // _ZN19CatalogPackManifestC2ERKS_
};
