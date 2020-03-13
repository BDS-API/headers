#pragma once

#include <string>
#include <unordered_map>
#include <vector>


class Localization {

public:
    ~Localization(); // _ZN12LocalizationD2Ev
    void getLanguageCode(std::string const&); // _ZN12Localization15getLanguageCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getRegionCode(std::string const&); // _ZN12Localization13getRegionCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getStringIdExists(std::string const&)const; // _ZNK12Localization17getStringIdExistsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCommaSeperator()const; // _ZNK12Localization17getCommaSeperatorEv
    std::string getFullLanguageCode()const; // _ZNK12Localization19getFullLanguageCodeB5cxx11Ev
    std::string getIETFLanguageCode()const; // _ZNK12Localization19getIETFLanguageCodeB5cxx11Ev
    std::string getLanguageCode()const; // _ZNK12Localization15getLanguageCodeB5cxx11Ev
    std::string getRegionCode()const; // _ZNK12Localization13getRegionCodeB5cxx11Ev
    std::string _getStrings()const; // _ZNK12Localization11_getStringsB5cxx11Ev
    void loadFromResourcePackManager(ResourcePackManager &, std::vector<std::string> const&); // _ZN12Localization27loadFromResourcePackManagerER19ResourcePackManagerRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS8_EE
    void _getLangFilePath(std::string const&); // _ZN12Localization16_getLangFilePathERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void appendTranslations(std::string const&, std::vector<std::string> const&, std::vector<std::string> const&, std::string const&); // _ZN12Localization18appendTranslationsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EESC_S7_
    void loadFromPack(std::string const&, PackAccessStrategy const&, std::vector<std::string> const&); // _ZN12Localization12loadFromPackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK18PackAccessStrategyRKSt6vectorIS5_SaIS5_EE
    Localization(std::string const&, Localization *); // _ZN12LocalizationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPS_
    void _isCommaSeperatedLanguage(std::string const&); // _ZN12Localization25_isCommaSeperatedLanguageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    Localization(std::string const&); // _ZN12LocalizationC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getSimple(std::string const&)const; // _ZNK12Localization10_getSimpleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isFormattedString(std::string const&); // _ZN12Localization17isFormattedStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _parseFormattedString(std::string const&)const; // _ZNK12Localization21_parseFormattedStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _get(std::string const&, std::vector<std::string> const&)const; // _ZNK12Localization4_getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void _replaceTokens(std::string &, std::vector<std::string> const&)const; // _ZNK12Localization14_replaceTokensERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void get(std::string const&, std::string &, std::vector<std::string> const&)const; // _ZNK12Localization3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_RKSt6vectorIS5_SaIS5_EE
    void appendTranslations(Localization const&); // _ZN12Localization18appendTranslationsERKS_
    void appendTranslations(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); // _ZN12Localization18appendTranslationsERKSt18unordered_multimapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIS6_S6_ESt4hashIS6_ESt8equal_toIS6_ESaIS7_IKS6_S8_EEE
};
