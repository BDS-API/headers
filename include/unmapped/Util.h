#pragma once

#include <memory>
#include <vector>
#include <set>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <istream>
#include <functional>


namespace Util {

    static long COLOR_CODE;
    static std::string EMPTY_STRING;
    static std::string NEW_LINE;
    static std::string EMPTY_GUID;

    void splitString(std::string const&, char, std::vector<std::string> &);
    bool isStartIdentifierChar(char);
//  void splitLines(std::string const&, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
    std::string getTimeStamp();
    void toHex(char);
    void utf8lenNoColorCodes(std::string const&);
    bool isAligned(unsigned long, unsigned int);
    void toWideString(std::string const&);
    void toBool(std::string const&, bool &);
    bool isNumberStringLessThan(std::string const&, std::string const&);
    std::string base64_encode(unsigned char const*, unsigned int, bool);
    void toLower(std::string const&);
    void cp1252ToUTF8(std::string const&);
    void freeStringMemory(std::string &);
    void normalizeLineEndings(std::string &);
    void removeIllegalChars(std::string);
    std::string boolToString(bool);
    bool isDigit(char);
    void stripQueryParametersFromUrl(std::string const&);
//  bool isValidIP(gsl::basic_string_span<char const, -1l>, bool, bool); //TODO: incomplete function definition
    bool isUpperCaseAlphaHex(char);
    std::string toLower(char const*);
    void base64url_encode(std::string);
    void urlEncode(std::string const&);
//  std::string format(char const*, ...); //TODO: incomplete function definition
    void toString(std::string const&);
//  void toString(BoneTransformType); //TODO: incomplete function definition
    bool isIdentifierChar(char);
    void base64_encode(std::string const&, bool);
    void cp437ToUTF8(std::string const&);
//  bool endsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toInt(std::string const&, int &, int, int);
    void trimVectorStrings(std::vector<std::string> &);
    void split(std::string const&, char);
    void stripProtocolFromUrl(std::string const&);
    void getDataInheritance(std::string const&);
//  void stringReplace(std::string, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>); //TODO: incomplete function definition
    void nextHigherPow2(unsigned int);
    void anonymizeIPAddress(std::string const&);
    void base64_url_to_standard(std::string);
    void _recordProfanityLocationInWord(std::string const&, std::string &, std::vector<std::pair<int, int>> const&, int, int, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&);
    std::string toUpper(char const*);
    void utf8lenDelta(std::string const&, std::string const&);
    void toUpperInPlace(std::string &);
    void fromHex(std::string const&);
    void stringIsInVector(std::vector<std::string> const&, std::string const&);
    void loadGameVersion(SemVersion &, Json::Value const&);
    void replaceSingleUtf8CharacterWithAscii(std::string &, std::string const&, char);
    void filterProfanityFromString(std::string const&, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&);
//  void convertCapabilitiesStringToEnum(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void stringReplace(std::string &, std::string const&, std::string const&, int);
    void stringReplaceCopy(std::string const&, std::string const&, std::string const&, int);
    std::string toString(float, int);
//  std::string vFormat(char const*, __va_list_tag *); //TODO: incomplete function definition
    void toSafeNumber(std::string const&, unsigned long &);
    void toUpper(std::string const&);
    std::string getFilesizeString(unsigned long);
    void safeGetline(std::istream &, std::string &);
    std::string toNiceString(int);
//  void toString(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    void stringUTF8ToUTF16(std::string const&);
    bool isPowerOfTwo(unsigned int);
//  bool isValidPath(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  void split(std::string const&, std::vector<std::string> const&, bool, bool, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
    void utf8substring(std::string const&, int, int);
    void utf8len(std::string const&);
    void split(std::string const&, std::function<bool (char)>);
    void highestBitSet(unsigned int);
    void removeInvalidFileNameCharacters(std::string const&);
    void loadGameVersion(GameVersion &, Json::Value const&);
//  bool isValidIPv4(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toLowerInPlace(std::string &);
    std::string safeString(char const*);
    void removeChars(std::string, std::string const&);
//  void countWordOccurrences(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void base64_decode(std::string const&);
    void base64_standard_to_url(std::string);
//  std::string toLower(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
    void appendUtf8Character(std::string &, int);
    bool isUpperCaseAlphabetic(char);
    bool endsWith(std::string const&, std::string const&);
    bool isValidUTF8(std::string const&);
    bool isLowerCaseAlphaHex(char);
    void u64FromString(std::string const&);
    bool isAlphabeticChar(char);
    void memcpy_strided(void *, unsigned long, void const*, unsigned long, unsigned long, unsigned long);
//  void span_find(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toHex(std::string const&);
//  void compareNoCase(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    bool isValidIPAndPort(std::string const&, int);
    bool isNumber(std::string const&);
//  bool isValidIPv6(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void compress(std::string const&, std::string &);
    void removeAllColorCodes(std::string const&);
    std::string formatTickDuration(int);
    bool isAlphaNumeric(char);
    void stringTrim(std::string const&);
//  void stringUTF16ToUTF8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    void nextLowerPow2(unsigned int);
    void anonymizeIPv6Address(std::string const&);
    void replaceUtf8CharactersWithAscii(std::string &, std::vector<std::pair<std::string, char>> const&);
//  std::string toUpper(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
//  std::string caseFold(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void stringContains(std::string const&, char);
    void stringTrim(std::string const&, std::string const&);
    bool isNumberStringGreaterThan(std::string const&, std::string const&);
    bool isIntegral(std::string);
//  std::string findLastColorCode(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
//  bool startsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void hashCode(std::string const&);
    bool endsWithCaseInsensitive(std::string const&, std::string const&);
    void decompress(std::string const&, std::string &);
    void base64url_decode(std::string);
//  void _breakIntoWordsAndFindProfanity(std::string &, std::string &, std::vector<std::pair<int, int>> const&, std::unordered_set<char, std::hash<char>, std::equal_to<char>, std::allocator<char>> const&, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set const&, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>); //TODO: incomplete function definition
    bool isWhiteSpace(char);
    bool isLowerCaseAlphabetic(char);
    std::string generateRandomId(int);
    void simpleFormat(std::string const&, std::vector<std::string> const&);
    bool startsWith(std::string const&, std::string const&);
    void stripBOM(std::string &);
    void toSafeNumber(std::string const&, unsigned int &);
};
