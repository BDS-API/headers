#pragma once



class UIProfanityContext {

public:
    virtual UIProfanityContext::~UIProfanityContext()
    virtual void _doMaskProfanity(std::string const&)const;
    virtual void _doFindProfanity(std::string const&)const;

    void createProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&);
    UIProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&);
    void setFilterMask(ProfanityFilterContext);
    bool isFilterActive(ProfanityFilterContext)const;
    void filterProfanityFromString(ProfanityFilterContext, std::string const&, bool)const;
    void findProfanity(ProfanityFilterContext, std::string const&)const;
};
