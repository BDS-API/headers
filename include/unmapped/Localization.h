#pragma once

#include "../bedrock/pack/PackAccessStrategy"
#include "../bedrock/pack/ResourcePackManager"


class Localization {

public:

    void getLanguageCode(std::string const&);
    void getRegionCode(std::string const&);
    void getStringIdExists(std::string const&)const;
    void getCommaSeperator()const;
    void loadFromResourcePackManager(ResourcePackManager &, std::vector<std::string, std::allocator<std::string>> const&);
    void _getLangFilePath(std::string const&);
    void appendTranslations(std::string const&, std::vector<std::string, std::allocator<std::string>> const&, std::vector<std::string, std::allocator<std::string>> const&, std::string const&);
    void loadFromPack(std::string const&, PackAccessStrategy const&, std::vector<std::string, std::allocator<std::string>> const&);
    Localization(std::string const&, Localization*);
    void _isCommaSeperatedLanguage(std::string const&);
    Localization(std::string const&);
    void _getSimple(std::string const&)const;
    bool isFormattedString(std::string const&);
    void _parseFormattedString(std::string const&)const;
    void _get(std::string const&, std::vector<std::string, std::allocator<std::string>> const&)const;
    void _replaceTokens(std::string &, std::vector<std::string, std::allocator<std::string>> const&)const;
    void get(std::string const&, std::string&, std::vector<std::string, std::allocator<std::string>> const&)const;
    void appendTranslations(Localization const&);
    void appendTranslations(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
};
