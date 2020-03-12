#pragma once

#include <string>
#include <unordered_set>
#include <unordered_map>
#include <functional>
#include <memory>
#include <utility>


class UIProfanityContext {

public:
    virtual void _doFindProfanity(std::string const&)const;
    virtual void _doMaskProfanity(std::string const&)const;
    ~UIProfanityContext();
//  void createProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
//  void filterProfanityFromString(ProfanityFilterContext, std::string const&, bool)const; //TODO: incomplete function definition
//  void findProfanity(ProfanityFilterContext, std::string const&)const; //TODO: incomplete function definition
//  void setFilterMask(ProfanityFilterContext); //TODO: incomplete function definition
//  bool isFilterActive(ProfanityFilterContext)const; //TODO: incomplete function definition
//  UIProfanityContext(std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
};
