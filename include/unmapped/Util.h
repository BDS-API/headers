#pragma once

#include <unordered_map>
#include <vector>
#include <memory>
#include <string>
#include <istream>
#include <set>
#include <functional>
#include <unordered_set>


namespace Util {

    static long COLOR_CODE;
    static std::string EMPTY_STRING;
    static std::string NEW_LINE;
    static std::string EMPTY_GUID;

    void compress(std::string const&, std::string &); // _ZN4Util8compressERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_
    void decompress(std::string const&, std::string &); // _ZN4Util10decompressERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_
    void removeIllegalChars(std::string); // _ZN4Util18removeIllegalCharsENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeChars(std::string, std::string const&); // _ZN4Util11removeCharsENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_
    void stripQueryParametersFromUrl(std::string const&); // _ZN4Util27stripQueryParametersFromUrlERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stripProtocolFromUrl(std::string const&); // _ZN4Util20stripProtocolFromUrlERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stringIsInVector(std::vector<std::string> const&, std::string const&); // _ZN4Util16stringIsInVectorERKSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EERKS6_
    void trimVectorStrings(std::vector<std::string> &); // _ZN4Util17trimVectorStringsERSt6vectorINSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESaIS6_EE
    void hashCode(std::string const&); // _ZN4Util8hashCodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void removeAllColorCodes(std::string const&); // _ZN4Util19removeAllColorCodesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string findLastColorCode(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition // _ZN4Util17findLastColorCodeB5cxx11EN3gsl17basic_string_spanIKcLln1EEEb
//  void span_find(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util9span_findEN3gsl17basic_string_spanIKcLln1EEES3_
    std::string safeString(char const*); // _ZN4Util10safeStringB5cxx11EPKc
    void utf8lenDelta(std::string const&, std::string const&); // _ZN4Util12utf8lenDeltaERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void utf8lenNoColorCodes(std::string const&); // _ZN4Util19utf8lenNoColorCodesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void utf8substring(std::string const&, int, int); // _ZN4Util13utf8substringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEii
    void appendUtf8Character(std::string &, int); // _ZN4Util19appendUtf8CharacterERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void replaceSingleUtf8CharacterWithAscii(std::string &, std::string const&, char); // _ZN4Util35replaceSingleUtf8CharacterWithAsciiERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_c
    void replaceUtf8CharactersWithAscii(std::string &, std::vector<std::pair<std::string, char>> const&); // _ZN4Util30replaceUtf8CharactersWithAsciiERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorISt4pairIS5_cESaIS9_EE
    void simpleFormat(std::string const&, std::vector<std::string> const&); // _ZN4Util12simpleFormatERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EE
    std::string toNiceString(int); // _ZN4Util12toNiceStringB5cxx11Ei
    std::string toString(float, int); // _ZN4Util8toStringB5cxx11Efi
//  std::string caseFold(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util8caseFoldB5cxx11EN3gsl17basic_string_spanIKcLln1EEE
    bool isIntegral(std::string); // _ZN4Util10isIntegralENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void urlEncode(std::string const&); // _ZN4Util9urlEncodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void freeStringMemory(std::string &); // _ZN4Util16freeStringMemoryERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void countWordOccurrences(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util20countWordOccurrencesEN3gsl17basic_string_spanIKcLln1EEES3_
//  bool isValidPath(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util11isValidPathEN3gsl17basic_string_spanIKcLln1EEE
    std::string formatTickDuration(int); // _ZN4Util18formatTickDurationB5cxx11Ei
    std::string getFilesizeString(unsigned long); // _ZN4Util17getFilesizeStringB5cxx11Em
    void splitString(std::string const&, char, std::vector<std::string> &); // _ZN4Util11splitStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEcRSt6vectorIS5_SaIS5_EE
    void stringContains(std::string const&, char); // _ZN4Util14stringContainsERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEc
    void toInt(std::string const&, int &, int, int); // _ZN4Util5toIntERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERiii
    std::string boolToString(bool); // _ZN4Util12boolToStringB5cxx11Eb
    void toBool(std::string const&, bool &); // _ZN4Util6toBoolERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERb
    void anonymizeIPAddress(std::string const&); // _ZN4Util18anonymizeIPAddressERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool isValidIPv4(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util11isValidIPv4EN3gsl17basic_string_spanIKcLln1EEE
//  bool isValidIPv6(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util11isValidIPv6EN3gsl17basic_string_spanIKcLln1EEE
    void anonymizeIPv6Address(std::string const&); // _ZN4Util20anonymizeIPv6AddressERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  bool isValidIP(gsl::basic_string_span<char const, -1l>, bool, bool); //TODO: incomplete function definition // _ZN4Util9isValidIPEN3gsl17basic_string_spanIKcLln1EEEbb
    bool isValidIPAndPort(std::string const&, int); // _ZN4Util16isValidIPAndPortERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _recordProfanityLocationInWord(std::string const&, std::string &, std::vector<std::pair<int, int>> const&, int, int, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); // _ZN4Util30_recordProfanityLocationInWordERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERS5_RKSt6vectorISt4pairIiiESaISB_EEiiRSt3setISB_St4lessISB_ESC_ERKSt13unordered_mapIS5_iSt4hashIS5_ESt8equal_toIS5_ESaISA_IS6_iEEERKSt13unordered_setIS5_SN_SP_SaIS5_EE
//  void _breakIntoWordsAndFindProfanity(std::string &, std::string &, std::vector<std::pair<int, int>> const&, std::unordered_set<char, std::hash<char>, std::equal_to<char>, std::allocator<char>> const&, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set const&, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>); //TODO: incomplete function definition // _ZN4Util31_breakIntoWordsAndFindProfanityERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES6_RKSt6vectorISt4pairIiiESaIS9_EERKSt13unordered_setIcSt4hashIcESt8equal_toIcES4_ERSt3setIS9_St4lessIS9_ESA_ERKSt13unordered_mapIS5_iSF_IS5_ESH_IS5_ESaIS8_IKS5_iEEERKSE_IS5_SS_ST_SaIS5_EE
    void filterProfanityFromString(std::string const&, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); // _ZN4Util25filterProfanityFromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt13unordered_mapIS5_iSt4hashIS5_ESt8equal_toIS5_ESaISt4pairIS6_iEEERKSt13unordered_setIS5_SA_SC_SaIS5_EE
    std::string getTimeStamp(); // _ZN4Util12getTimeStampB5cxx11Ev
    bool isNumber(std::string const&); // _ZN4Util8isNumberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool isNumberStringGreaterThan(std::string const&, std::string const&); // _ZN4Util25isNumberStringGreaterThanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    bool isNumberStringLessThan(std::string const&, std::string const&); // _ZN4Util22isNumberStringLessThanERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void toSafeNumber(std::string const&, unsigned long &); // _ZN4Util12toSafeNumberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERm
    void toSafeNumber(std::string const&, unsigned int &); // _ZN4Util12toSafeNumberERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERj
    bool isWhiteSpace(char); // _ZN4Util12isWhiteSpaceEc
    bool isDigit(char); // _ZN4Util7isDigitEc
    bool isAlphaNumeric(char); // _ZN4Util14isAlphaNumericEc
    bool isAlphabeticChar(char); // _ZN4Util16isAlphabeticCharEc
    bool isLowerCaseAlphabetic(char); // _ZN4Util21isLowerCaseAlphabeticEc
    bool isUpperCaseAlphabetic(char); // _ZN4Util21isUpperCaseAlphabeticEc
    bool isUpperCaseAlphaHex(char); // _ZN4Util19isUpperCaseAlphaHexEc
    bool isLowerCaseAlphaHex(char); // _ZN4Util19isLowerCaseAlphaHexEc
    bool isStartIdentifierChar(char); // _ZN4Util21isStartIdentifierCharEc
    bool isIdentifierChar(char); // _ZN4Util16isIdentifierCharEc
//  void toString(BoneTransformType); //TODO: incomplete function definition // _ZN4Util8toStringE17BoneTransformType
    void getDataInheritance(std::string const&); // _ZN4Util18getDataInheritanceERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void memcpy_strided(void *, unsigned long, void const*, unsigned long, unsigned long, unsigned long); // _ZN4Util14memcpy_stridedEPvmPKvmmm
    void loadGameVersion(GameVersion &, Json::Value const&); // _ZN4Util15loadGameVersionER11GameVersionRKN4Json5ValueE
    void loadGameVersion(SemVersion &, Json::Value const&); // _ZN4Util15loadGameVersionER10SemVersionRKN4Json5ValueE
    std::string generateRandomId(int); // _ZN4Util16generateRandomIdB5cxx11Ei
    bool isPowerOfTwo(unsigned int); // _ZN4Util12isPowerOfTwoEj
    bool isAligned(unsigned long, unsigned int); // _ZN4Util9isAlignedEmj
    void nextHigherPow2(unsigned int); // _ZN4Util14nextHigherPow2Ej
    void nextLowerPow2(unsigned int); // _ZN4Util13nextLowerPow2Ej
    void highestBitSet(unsigned int); // _ZN4Util13highestBitSetEj
//  void convertCapabilitiesStringToEnum(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util31convertCapabilitiesStringToEnumEN3gsl17basic_string_spanIKcLln1EEE
    void base64_encode(std::string const&, bool); // _ZN4Util13base64_encodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEb
    std::string base64_encode(unsigned char const*, unsigned int, bool); // _ZN4Util13base64_encodeB5cxx11EPKhjb
    void base64_decode(std::string const&); // _ZN4Util13base64_decodeERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void base64_url_to_standard(std::string); // _ZN4Util22base64_url_to_standardENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void base64_standard_to_url(std::string); // _ZN4Util22base64_standard_to_urlENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void base64url_encode(std::string); // _ZN4Util16base64url_encodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void base64url_decode(std::string); // _ZN4Util16base64url_decodeENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void toString(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition // _ZN4Util8toStringERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE
    void toString(std::string const&); // _ZN4Util8toStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toWideString(std::string const&); // _ZN4Util12toWideStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toHex(char); // _ZN4Util5toHexEc
    void toHex(std::string const&); // _ZN4Util5toHexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void fromHex(std::string const&); // _ZN4Util7fromHexERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void compareNoCase(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util13compareNoCaseEN3gsl17basic_string_spanIKcLln1EEES3_
    void stringTrim(std::string const&); // _ZN4Util10stringTrimERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stringTrim(std::string const&, std::string const&); // _ZN4Util10stringTrimERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void stringReplace(std::string &, std::string const&, std::string const&, int); // _ZN4Util13stringReplaceERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKS5_S8_i
//  void stringReplace(std::string, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>); //TODO: incomplete function definition // _ZN4Util13stringReplaceENSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE11buffer_spanISt4pairIN3gsl17basic_string_spanIKcLln1EEESB_EE
    void stringReplaceCopy(std::string const&, std::string const&, std::string const&, int); // _ZN4Util17stringReplaceCopyERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_S7_i
    std::string toLower(char const*); // _ZN4Util7toLowerB5cxx11EPKc
    std::string toUpper(char const*); // _ZN4Util7toUpperB5cxx11EPKc
    void removeInvalidFileNameCharacters(std::string const&); // _ZN4Util31removeInvalidFileNameCharactersERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toLower(std::string const&); // _ZN4Util7toLowerERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toUpper(std::string const&); // _ZN4Util7toUpperERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string toLower(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition // _ZN4Util7toLowerB5cxx11ERKN3gsl17basic_string_spanIKcLln1EEE
//  std::string toUpper(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition // _ZN4Util7toUpperB5cxx11ERKN3gsl17basic_string_spanIKcLln1EEE
    void toLowerInPlace(std::string &); // _ZN4Util14toLowerInPlaceERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void toUpperInPlace(std::string &); // _ZN4Util14toUpperInPlaceERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  std::string format(char const*, ...); //TODO: incomplete function definition // _ZN4Util6formatB5cxx11EPKcz
//  std::string vFormat(char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN4Util7vFormatB5cxx11EPKcP13__va_list_tag
    bool startsWith(std::string const&, std::string const&); // _ZN4Util10startsWithERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  bool startsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util10startsWithEN3gsl17basic_string_spanIKcLln1EEES3_
    void normalizeLineEndings(std::string &); // _ZN4Util20normalizeLineEndingsERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void cp437ToUTF8(std::string const&); // _ZN4Util11cp437ToUTF8ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void cp1252ToUTF8(std::string const&); // _ZN4Util12cp1252ToUTF8ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void stringUTF8ToUTF16(std::string const&); // _ZN4Util17stringUTF8ToUTF16ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void stringUTF16ToUTF8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition // _ZN4Util17stringUTF16ToUTF8ERKNSt7__cxx1112basic_stringIwSt11char_traitsIwESaIwEEE
    bool isValidUTF8(std::string const&); // _ZN4Util11isValidUTF8ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void u64FromString(std::string const&); // _ZN4Util13u64FromStringERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void utf8len(std::string const&); // _ZN4Util7utf8lenERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    bool endsWith(std::string const&, std::string const&); // _ZN4Util8endsWithERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
//  bool endsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN4Util8endsWithEN3gsl17basic_string_spanIKcLln1EEES3_
    bool endsWithCaseInsensitive(std::string const&, std::string const&); // _ZN4Util23endsWithCaseInsensitiveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES7_
    void split(std::string const&, char); // _ZN4Util5splitERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEc
    void split(std::string const&, std::function<bool (char)>); // _ZN4Util5splitERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFbcEE
    void safeGetline(std::istream &, std::string &); // _ZN4Util11safeGetlineERSiRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
//  void split(std::string const&, std::vector<std::string> const&, bool, bool, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition // _ZN4Util5splitERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKSt6vectorIS5_SaIS5_EEbbPFRSiSD_RS5_E
//  void splitLines(std::string const&, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition // _ZN4Util10splitLinesERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPFRSiS8_RS5_E
    void stripBOM(std::string &); // _ZN4Util8stripBOMERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
