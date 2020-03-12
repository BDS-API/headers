#pragma once

#include <string>
#include <unordered_map>
#include <vector>


class Localization {

public:
    Localization(std::string const&, Localization *);
    ~Localization();
    void _get(std::string const&, std::vector<std::string> const&)const;
    std::string getLanguageCode()const;
    void _replaceTokens(std::string &, std::vector<std::string> const&)const;
    void get(std::string const&, std::string &, std::vector<std::string> const&)const;
    void loadFromResourcePackManager(ResourcePackManager &, std::vector<std::string> const&);
    std::string getFullLanguageCode()const;
    void _isCommaSeperatedLanguage(std::string const&);
    void appendTranslations(std::string const&, std::vector<std::string> const&, std::vector<std::string> const&, std::string const&);
    void appendTranslations(Localization const&);
    std::string getRegionCode()const;
    void appendTranslations(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
    bool isFormattedString(std::string const&);
    void getCommaSeperator()const;
    void getLanguageCode(std::string const&);
    std::string getIETFLanguageCode()const;
    void _parseFormattedString(std::string const&)const;
    void loadFromPack(std::string const&, PackAccessStrategy const&, std::vector<std::string> const&);
    void getRegionCode(std::string const&);
    void getStringIdExists(std::string const&)const;
    void _getLangFilePath(std::string const&);
    void _getSimple(std::string const&)const;
    std::string _getStrings()const;
    Localization(std::string const&);
};
