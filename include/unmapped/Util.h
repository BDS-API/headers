#pragma once

#include "SemVersion.h"
#include <string>
#include "GameVersion.h"
#include <unordered_set>
#include <unordered_map>
#include "../json/Value.h"
#include <functional>
#include <vector>
#include <memory>
#include <set>
#include <istream>
#include <utility>


namespace Util {

    static long COLOR_CODE;
    static std::string EMPTY_STRING;
    static std::string NEW_LINE;
    static std::string EMPTY_GUID;

    bool endsWithCaseInsensitive(std::string const&, std::string const&);
    bool isIdentifierChar(char);
    void stringContains(std::string const&, char);
    void trimVectorStrings(std::vector<std::string> &);
//  void split(std::string const&, std::vector<std::string> const&, bool, bool, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
    bool startsWith(std::string const&, std::string const&);
//  void stringUTF16ToUTF8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
//  std::string caseFold(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  std::string toUpper(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
    void u64FromString(std::string const&);
    void removeIllegalChars(std::string);
    void loadGameVersion(GameVersion &, Json::Value const&);
    void base64url_encode(std::string);
    void fromHex(std::string const&);
    void base64_decode(std::string const&);
//  bool startsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void removeChars(std::string, std::string const&);
    void splitString(std::string const&, char, std::vector<std::string> &);
    void base64_url_to_standard(std::string);
//  void toString(BoneTransformType); //TODO: incomplete function definition
    bool isIntegral(std::string);
//  std::string findLastColorCode(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
//  void countWordOccurrences(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void compress(std::string const&, std::string &);
    void stringUTF8ToUTF16(std::string const&);
    void toUpperInPlace(std::string &);
//  bool isValidIP(gsl::basic_string_span<char const, -1l>, bool, bool); //TODO: incomplete function definition
    void stringTrim(std::string const&);
//  std::string vFormat(char const*, __va_list_tag *); //TODO: incomplete function definition
    std::string getTimeStamp();
    void cp437ToUTF8(std::string const&);
    void toLowerInPlace(std::string &);
    bool isUpperCaseAlphabetic(char);
    void decompress(std::string const&, std::string &);
    void toSafeNumber(std::string const&, unsigned int &);
    void stripBOM(std::string &);
    bool endsWith(std::string const&, std::string const&);
//  bool endsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void utf8substring(std::string const&, int, int);
    bool isValidUTF8(std::string const&);
    void nextLowerPow2(unsigned int);
    void toInt(std::string const&, int &, int, int);
    bool isNumber(std::string const&);
    void stripProtocolFromUrl(std::string const&);
    void nextHigherPow2(unsigned int);
    bool isPowerOfTwo(unsigned int);
    void toHex(char);
    void stringReplaceCopy(std::string const&, std::string const&, std::string const&, int);
    void base64url_decode(std::string);
    void toWideString(std::string const&);
    void utf8lenNoColorCodes(std::string const&);
    void hashCode(std::string const&);
//  void filterProfanityFromString(std::string const&, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
    bool isAligned(unsigned long, unsigned int);
    void utf8lenDelta(std::string const&, std::string const&);
    void removeAllColorCodes(std::string const&);
    void freeStringMemory(std::string &);
    void highestBitSet(unsigned int);
    bool isLowerCaseAlphaHex(char);
    std::string boolToString(bool);
    void toString(std::string const&);
    void anonymizeIPv6Address(std::string const&);
    void memcpy_strided(void *, unsigned long, void const*, unsigned long, unsigned long, unsigned long);
    void getDataInheritance(std::string const&);
    void split(std::string const&, std::function<bool (char)>);
    std::string base64_encode(unsigned char const*, unsigned int, bool);
//  bool isValidIPv4(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void base64_standard_to_url(std::string);
//  void convertCapabilitiesStringToEnum(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toSafeNumber(std::string const&, unsigned long &);
//  void splitLines(std::string const&, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
    bool isUpperCaseAlphaHex(char);
    void stringReplace(std::string &, std::string const&, std::string const&, int);
    void replaceSingleUtf8CharacterWithAscii(std::string &, std::string const&, char);
    std::string getFilesizeString(unsigned long);
    void normalizeLineEndings(std::string &);
    void appendUtf8Character(std::string &, int);
    bool isAlphaNumeric(char);
    void base64_encode(std::string const&, bool);
//  void compareNoCase(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string toUpper(char const*);
    bool isNumberStringGreaterThan(std::string const&, std::string const&);
    void stringTrim(std::string const&, std::string const&);
    std::string safeString(char const*);
    bool isDigit(char);
    void anonymizeIPAddress(std::string const&);
    void toLower(std::string const&);
    void stripQueryParametersFromUrl(std::string const&);
//  std::string toLower(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
    std::string formatTickDuration(int);
    bool isValidIPAndPort(std::string const&, int);
    void safeGetline(std::istream &, std::string &);
    bool isNumberStringLessThan(std::string const&, std::string const&);
    bool isLowerCaseAlphabetic(char);
    void removeInvalidFileNameCharacters(std::string const&);
    void urlEncode(std::string const&);
    bool isWhiteSpace(char);
    void toUpper(std::string const&);
    bool isStartIdentifierChar(char);
//  bool isValidIPv6(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toBool(std::string const&, bool &);
//  void toString(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    void utf8len(std::string const&);
    void loadGameVersion(SemVersion &, Json::Value const&);
//  void _recordProfanityLocationInWord(std::string const&, std::string &, std::vector<std::pair<int, int>> const&, int, int, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
//  void _breakIntoWordsAndFindProfanity(std::string &, std::string &, std::vector<std::pair<int, int>> const&, std::unordered_set<char, std::hash<char>, std::equal_to<char>, std::allocator<char>> const&, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set const&, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>); //TODO: incomplete function definition
    std::string toString(float, int);
    std::string generateRandomId(int);
//  void stringReplace(std::string, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>); //TODO: incomplete function definition
    void stringIsInVector(std::vector<std::string> const&, std::string const&);
    std::string toNiceString(int);
//  void span_find(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void toHex(std::string const&);
//  bool isValidPath(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void split(std::string const&, char);
    bool isAlphabeticChar(char);
    void simpleFormat(std::string const&, std::vector<std::string> const&);
    std::string toLower(char const*);
    void cp1252ToUTF8(std::string const&);
//  std::string format(char const*, ...); //TODO: incomplete function definition
    void replaceUtf8CharactersWithAscii(std::string &, std::vector<std::pair<std::string, char>> const&);
};
