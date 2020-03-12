#pragma once

#include "../bedrock/pack/PackAccessStrategy.h"
#include <string>
#include <unordered_map>
#include <functional>
#include "../bedrock/pack/ResourcePackManager.h"
#include <vector>
#include <memory>
#include <utility>


class Localization {

public:
//  void appendTranslations(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); //TODO: incomplete function definition
    void get(std::string const&, std::string &, std::vector<std::string> const&)const;
    std::string getIETFLanguageCode()const;
    ~Localization();
    void getRegionCode(std::string const&);
    void getStringIdExists(std::string const&)const;
    void getLanguageCode(std::string const&);
    void _getSimple(std::string const&)const;
    std::string getRegionCode()const;
    Localization(std::string const&, Localization *);
    void appendTranslations(Localization const&);
    std::string _getStrings()const;
    void _getLangFilePath(std::string const&);
    void _isCommaSeperatedLanguage(std::string const&);
    bool isFormattedString(std::string const&);
    void loadFromResourcePackManager(ResourcePackManager &, std::vector<std::string> const&);
    void _replaceTokens(std::string &, std::vector<std::string> const&)const;
    std::string getFullLanguageCode()const;
    void appendTranslations(std::string const&, std::vector<std::string> const&, std::vector<std::string> const&, std::string const&);
    std::string getLanguageCode()const;
    Localization(std::string const&);
    void _parseFormattedString(std::string const&)const;
    void loadFromPack(std::string const&, PackAccessStrategy const&, std::vector<std::string> const&);
    void getCommaSeperator()const;
    void _get(std::string const&, std::vector<std::string> const&)const;
};
