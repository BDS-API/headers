#pragma once

#include "../bedrock/pack/PackAccessStrategy"
#include "../json/Value"
#include "../bedrock/pack/ResourcePackManager"
#include "../bedrock/pack/PackManifest"


class I18n {

public:
    static long mLanguageSupportsHypenSplitting;
    static long mEmptyLanguage;
    static long mCurrentLanguage;
    static long mCurrentPackMetaLanguage;
    static long mResourcePackManager;
    static long mLanguages;
    static long mLanguageCodes[abi:cxx11];
    static long mLanguageNames[abi:cxx11];
    static long mAdditionalTranslationsBackupMutex;
    static long mAdditionalTranslationsBackup;
    static long mLanguageChangedListeners;
    static long mPackKeywordLanguages;
    static long mPackReservedKeys[abi:cxx11];
    static long mFormatDictionary[abi:cxx11];


    void clearLanguages();
    void _findAvailableLanguages(Json::Value const&, std::vector<std::string, std::allocator<std::string>> &);
    void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &);
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::string const&);
    void loadAllLanguages(ResourcePackManager &);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string, std::allocator<std::string>> const&);
    void _getPackKeywordLocale(std::string const&);
    void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
    void getLanguageKeywordsFromPack(PackManifest const&, std::string const&);
    void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&);
    void _getAdditionalTranslationsBackupLocale(std::string const&, bool);
    void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&, std::string const&);
    void _findLocaleFor(std::string const&);
    void appendLanguageStrings(PackAccessStrategy *);
    void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void ()(std::string const&, bool)>);
    void chooseLanguage(Localization const&);
    void _setLanguageSupportsHypenSplitting(Localization const&);
    void _handleLanguageChangedListeners(std::string const&, bool);
    void chooseLanguage(std::string const&);
    void getLocaleCodeFor(std::string const&);
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
