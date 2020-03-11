#pragma once

#include <utility>
#include <unordered_map>
#include "../bedrock/pack/PackManifest.h"
#include <string>
#include "../bedrock/pack/ResourcePackManager.h"
#include "../json/Value.h"
#include <memory>
#include "./ResourceLoadManager.h"
#include "./Localization.h"
#include <vector>
#include <functional>
#include "../bedrock/pack/PackAccessStrategy.h"
#include <map>


class I18n {

public:
    static long mLanguageSupportsHypenSplitting;
    static long mEmptyLanguage;
    static long mCurrentLanguage;
    static long mCurrentPackMetaLanguage;
    static long mResourcePackManager;
    static long mLanguages;
    static std::string mLanguageCodes;
    static std::string mLanguageNames;
    static long mAdditionalTranslationsBackupMutex;
    static long mAdditionalTranslationsBackup;
    static long mLanguageChangedListeners;
    static long mPackKeywordLanguages;
    static std::string mPackReservedKeys;
    static std::string mFormatDictionary;


    void clearLanguages();
    std::string findAvailableLanguages(ResourcePackManager &);
    void _findAvailableLanguages(Json::Value const&, std::vector<std::string, std::allocator<std::string>> &);
    std::string _generatePackKeyPrefix(PackManifest const&);
    std::string findAvailableLanguageNames(ResourcePackManager &);
//  void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::string const&);
    void loadAllLanguages(ResourcePackManager &);
    std::string getLanguageCodesFromPack(PackAccessStrategy const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string, std::allocator<std::string>> const&);
    void _getPackKeywordLocale(std::string const&);
//  void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); //TODO: incomplete function definition
    void getLanguageKeywordsFromPack(PackManifest const&, std::string const&);
//  void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); //TODO: incomplete function definition
    void _getAdditionalTranslationsBackupLocale(std::string const&, bool);
//  void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&, std::string const&); //TODO: incomplete function definition
    void _findLocaleFor(std::string const&);
    void appendLanguageStrings(PackAccessStrategy *);
//  void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void (std::string const&, bool)>); //TODO: incomplete function definition
    void chooseLanguage(Localization const&);
    void _setLanguageSupportsHypenSplitting(Localization const&);
    void _handleLanguageChangedListeners(std::string const&, bool);
    void chooseLanguage(std::string const&);
    void getLocaleCodeFor(std::string const&);
    std::string getSupportedLanguageCodes();
    void getLanguageName(std::string const&);
    void getLocaleFor(std::string const&);
    void _getLocaleFor(std::string const&);
    void _getLocaleCodeFor(std::string const&);
    void get(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void get(std::string const&);
    void _getFormatParmas(std::string const&, std::vector<std::string, std::allocator<std::string>> &);
    void getPackKeywordValue(PackManifest const&, std::string const&);
    void getPackKeywordValueForTelemetry(PackManifest const&, std::string const&);
    bool hasPackKeyEntry(PackManifest const&, std::string const&);
    void getCurrentLanguage();
    void languageSupportsHypenSplitting();
    void getLocalizedAssetFileWithFallback(std::string const&, std::string const&);
    void _addFormatToDictionary(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void _getKeyExists(std::string const&);
    bool isPackKeyword(std::string const&);
};
