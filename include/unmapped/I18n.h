#pragma once

#include <memory>
#include <vector>
#include <string>
#include <unordered_map>
#include <map>
#include <functional>


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

    void languageSupportsHypenSplitting();
    void _getLocaleFor(std::string const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
    void _setLanguageSupportsHypenSplitting(Localization const&);
    void _findAvailableLanguages(Json::Value const&, std::vector<std::string> &);
    bool isPackKeyword(std::string const&);
    void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
    void chooseLanguage(Localization const&);
    void _getLocaleCodeFor(std::string const&);
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::string const&);
    void appendLanguageStrings(PackAccessStrategy *);
    void getCurrentLanguage();
    void get(std::string const&);
    void getLocaleFor(std::string const&);
    void getPackKeywordValueForTelemetry(PackManifest const&, std::string const&);
    void get(std::string const&, std::vector<std::string> const&);
    void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
    void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    void _handleLanguageChangedListeners(std::string const&, bool);
    void loadAllLanguages(ResourcePackManager &);
    void _getFormatParmas(std::string const&, std::vector<std::string> &);
    void getLanguageKeywordsFromPack(PackManifest const&, std::string const&);
    void _getAdditionalTranslationsBackupLocale(std::string const&, bool);
    std::string _generatePackKeyPrefix(PackManifest const&);
    std::string getSupportedLanguageCodes();
    void _getPackKeywordLocale(std::string const&);
    void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void (std::string const&, bool)>);
    void _findLocaleFor(std::string const&);
    void _getKeyExists(std::string const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string> const&);
    std::string findAvailableLanguageNames(ResourcePackManager &);
    std::string findAvailableLanguages(ResourcePackManager &);
    void getPackKeywordValue(PackManifest const&, std::string const&);
    void getLocalizedAssetFileWithFallback(std::string const&, std::string const&);
    void _addFormatToDictionary(std::string const&, std::vector<std::string> const&);
    bool hasPackKeyEntry(PackManifest const&, std::string const&);
    void getLanguageName(std::string const&);
    void getLocaleCodeFor(std::string const&);
    void clearLanguages();
    void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&, std::string const&);
    std::string getLanguageCodesFromPack(PackAccessStrategy const&);
    void chooseLanguage(std::string const&);
};
