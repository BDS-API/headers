#pragma once

class CatalogPackManifest : PackManifest {

public:
    virtual ~CatalogPackManifest();
    virtual void clone(void)const;

    void CatalogPackManifest(void);
    void setProductId(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void setMinimumPerformanceRequirements(DlcPerformanceTier);
    void getMinimumPerformanceRequirements(void)const;
    void CatalogPackManifest(CatalogPackManifest const&);
};
