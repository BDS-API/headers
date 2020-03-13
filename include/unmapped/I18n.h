#pragma once

#include <unordered_map>
#include <vector>
#include <memory>
#include <string>
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

    void clearLanguages(); // _ZN4I18n14clearLanguagesEv
    std::string findAvailableLanguages(ResourcePackManager &); // _ZN4I18n22findAvailableLanguagesB5cxx11ER19ResourcePackManager
    void _findAvailableLanguages(Json::Value const&, std::vector<std::string> &); // _ZN4I18n23_findAvailableLanguagesERKN4Json5ValueERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISA_EE
    std::string _generatePackKeyPrefix(PackManifest const&); // _ZN4I18n22_generatePackKeyPrefixB5cxx11ERK12PackManifest
    std::string findAvailableLanguageNames(ResourcePackManager &); // _ZN4I18n26findAvailableLanguageNamesB5cxx11ER19ResourcePackManager
    void _findAvailableLanguageNames(Json::Value const&, std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> &); // _ZN4I18n27_findAvailableLanguageNamesERKN4Json5ValueERSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESA_St4hashISA_ESt8equal_toISA_ESaISt4pairIKSA_SA_EEE
    void loadLanguages(ResourcePackManager &, ResourceLoadManager &, std::string const&); // _ZN4I18n13loadLanguagesER19ResourcePackManagerR19ResourceLoadManagerRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadAllLanguages(ResourcePackManager &); // _ZN4I18n16loadAllLanguagesER19ResourcePackManager
    std::string getLanguageCodesFromPack(PackAccessStrategy const&); // _ZN4I18n24getLanguageCodesFromPackB5cxx11ERK18PackAccessStrategy
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&); // _ZN4I18n28loadLanguageKeywordsFromPackERK12PackManifestRK18PackAccessStrategy
    void loadLanguageKeywordsFromPack(PackManifest const&, PackAccessStrategy const&, std::vector<std::string> const&); // _ZN4I18n28loadLanguageKeywordsFromPackERK12PackManifestRK18PackAccessStrategyRKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaISC_EE
    void _getPackKeywordLocale(std::string const&); // _ZN4I18n21_getPackKeywordLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void appendLanguageStringsFromPack(PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>, std::less<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); // _ZN4I18n29appendLanguageStringsFromPackERK12PackManifestRKSt8multimapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIS9_S9_ESt4lessIS9_ESaISA_IKS9_SB_EEE
    void getLanguageKeywordsFromPack(PackManifest const&, std::string const&); // _ZN4I18n27getLanguageKeywordsFromPackERK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::pair<std::string, std::string>>>> const&); // _ZN4I18n21loadLangaugesByLocaleERKSt18unordered_multimapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt4pairIS6_S6_ESt4hashIS6_ESt8equal_toIS6_ESaIS7_IKS6_S8_EEE
    void _getAdditionalTranslationsBackupLocale(std::string const&, bool); // _ZN4I18n38_getAdditionalTranslationsBackupLocaleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void appendAdditionalTranslations(std::unordered_map<std::string, std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, std::string>>> const&, std::string const&); // _ZN4I18n28appendAdditionalTranslationsERKSt13unordered_mapINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_St4hashIS6_ESt8equal_toIS6_ESaISt4pairIKS6_S6_EEERSC_
    void _findLocaleFor(std::string const&); // _ZN4I18n14_findLocaleForERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void appendLanguageStrings(PackAccessStrategy *); // _ZN4I18n21appendLanguageStringsEP18PackAccessStrategy
    void addLanguageChangedListener(std::weak_ptr<bool>, std::function<void (std::string const&, bool)>); // _ZN4I18n26addLanguageChangedListenerESt8weak_ptrIbESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEbEE
    void chooseLanguage(Localization const&); // _ZN4I18n14chooseLanguageERK12Localization
    void _setLanguageSupportsHypenSplitting(Localization const&); // _ZN4I18n34_setLanguageSupportsHypenSplittingERK12Localization
    void _handleLanguageChangedListeners(std::string const&, bool); // _ZN4I18n31_handleLanguageChangedListenersERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    void chooseLanguage(std::string const&); // _ZN4I18n14chooseLanguageERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getLocaleCodeFor(std::string const&); // _ZN4I18n16getLocaleCodeForERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    std::string getSupportedLanguageCodes(); // _ZN4I18n25getSupportedLanguageCodesB5cxx11Ev
    void getLanguageName(std::string const&); // _ZN4I18n15getLanguageNameERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getLocaleFor(std::string const&); // _ZN4I18n12getLocaleForERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getLocaleFor(std::string const&); // _ZN4I18n13_getLocaleForERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getLocaleCodeFor(std::string const&); // _ZN4I18n17_getLocaleCodeForERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void get(std::string const&, std::vector<std::string> const&); // _ZN4I18n3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void get(std::string const&); // _ZN4I18n3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getFormatParmas(std::string const&, std::vector<std::string> &); // _ZN4I18n16_getFormatParmasERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorIS5_SaIS5_EE
    void getPackKeywordValue(PackManifest const&, std::string const&); // _ZN4I18n19getPackKeywordValueERK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getPackKeywordValueForTelemetry(PackManifest const&, std::string const&); // _ZN4I18n31getPackKeywordValueForTelemetryERK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool hasPackKeyEntry(PackManifest const&, std::string const&); // _ZN4I18n15hasPackKeyEntryERK12PackManifestRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCurrentLanguage(); // _ZN4I18n18getCurrentLanguageEv
    void languageSupportsHypenSplitting(); // _ZN4I18n30languageSupportsHypenSplittingEv
    void getLocalizedAssetFileWithFallback(std::string const&, std::string const&); // _ZN4I18n33getLocalizedAssetFileWithFallbackERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void _addFormatToDictionary(std::string const&, std::vector<std::string> const&); // _ZN4I18n22_addFormatToDictionaryERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    void _getKeyExists(std::string const&); // _ZN4I18n13_getKeyExistsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isPackKeyword(std::string const&); // _ZN4I18n13isPackKeywordERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
