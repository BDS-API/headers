#pragma once

#include "PackManifest.h"
#include <string>


class CatalogPackManifest : PackManifest {

public:
    virtual void clone()const;
    ~CatalogPackManifest();
    CatalogPackManifest(CatalogPackManifest const&);
    void setProductId(std::string);
    std::string getProductId()const;
//  void setMinimumPerformanceRequirements(DlcPerformanceTier); //TODO: incomplete function definition
    void getMinimumPerformanceRequirements()const;
    CatalogPackManifest();
};
