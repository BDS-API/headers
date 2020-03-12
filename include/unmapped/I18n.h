#pragma once

#include "../bedrock/pack/PackAccessStrategy.h"
#include "../bedrock/pack/PackManifest.h"
#include "ResourceLoadManager.h"
#include <string>
#include <map>
#include <unordered_map>
#include "Localization.h"
#include "../json/Value.h"
#include <functional>
#include "../bedrock/pack/ResourcePackManager.h"
#include <vector>
#include <memory>
#include <utility>


namespace I18n {

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

    void _handleLanguageChangedListeners(std::string const&, bool);
    void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void (std::string const&, bool)>);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
    void _getLocaleFor(std::string const&);
    void get(std::string const&, std::vector<std::string> const&);
    void languageSupportsHypenSplitting();
    void getLocaleCodeFor(std::string const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string> const&);
    void _getLocaleCodeFor(std::string const&);
    void getLanguageKeywordsFromPack(PackManifest const&, std::string const&);
    std::string _generatePackKeyPrefix(PackManifest const&);
    bool hasPackKeyEntry(PackManifest const&, std::string const&);
//  void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); //TODO: incomplete function definition
    void _getKeyExists(std::string const&);
    void _findLocaleFor(std::string const&);
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::string const&);
    void getPackKeywordValueForTelemetry(PackManifest const&, std::string const&);
    void loadAllLanguages(ResourcePackManager &);
    void clearLanguages();
    void _findAvailableLanguages(Json::Value const&, std::vector<std::string> &);
    void getCurrentLanguage();
    void _addFormatToDictionary(std::string const&, std::vector<std::string> const&);
    void getLanguageName(std::string const&);
    void appendLanguageStrings(PackAccessStrategy *);
    bool isPackKeyword(std::string const&);
    std::string findAvailableLanguageNames(ResourcePackManager &);
    void getLocaleFor(std::string const&);
    void _setLanguageSupportsHypenSplitting(Localization const&);
    void getPackKeywordValue(PackManifest const&, std::string const&);
    std::string findAvailableLanguages(ResourcePackManager &);
//  void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); //TODO: incomplete function definition
    void get(std::string const&);
    std::string getLanguageCodesFromPack(PackAccessStrategy const&);
    void _getFormatParmas(std::string const&, std::vector<std::string> &);
    void getLocalizedAssetFileWithFallback(std::string const&, std::string const&);
    void chooseLanguage(Localization const&);
//  void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); //TODO: incomplete function definition
    void chooseLanguage(std::string const&);
    void _getPackKeywordLocale(std::string const&);
    std::string getSupportedLanguageCodes();
    void _getAdditionalTranslationsBackupLocale(std::string const&, bool);
//  void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&, std::string const&); //TODO: incomplete function definition
};
