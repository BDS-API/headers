#pragma once

class I18n {

public:
    static long I18n::mLanguageSupportsHypenSplitting;
    static long I18n::mEmptyLanguage;
    static long I18n::mCurrentLanguage;
    static long I18n::mCurrentPackMetaLanguage;
    static long I18n::mResourcePackManager;
    static long I18n::mLanguages;
    static long I18n::mAdditionalTranslationsBackupMutex;
    static long I18n::mAdditionalTranslationsBackup;
    static long I18n::mLanguageChangedListeners;
    static long I18n::mPackKeywordLanguages;


    void clearLanguages(void);
    void _findAvailableLanguages(Json::Value const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> &);
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void loadAllLanguages(ResourcePackManager &);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&);
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void _getPackKeywordLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>>> const&);
    void getLanguageKeywordsFromPack(PackManifest const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void loadLangaugesByLocale(std::unordered_multimap<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>>> const&);
    void _getAdditionalTranslationsBackupLocale(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void appendAdditionalTranslations(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _findLocaleFor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void appendLanguageStrings(PackAccessStrategy *);
    void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void ()(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool)>);
    void chooseLanguage(Localization const&);
    void _setLanguageSupportsHypenSplitting(Localization const&);
    void _handleLanguageChangedListeners(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, bool);
    void chooseLanguage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getLocaleCodeFor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getLanguageName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getLocaleFor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getLocaleFor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getLocaleCodeFor(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void get(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getFormatParmas(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> &);
    void getPackKeywordValue(PackManifest const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getPackKeywordValueForTelemetry(PackManifest const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool hasPackKeyEntry(PackManifest const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCurrentLanguage(void);
    void languageSupportsHypenSplitting(void);
    void getLocalizedAssetFileWithFallback(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _addFormatToDictionary(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>> const&);
    void _getKeyExists(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    bool isPackKeyword(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
