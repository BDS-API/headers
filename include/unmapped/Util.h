#pragma once

#include <set>
#include <utility>
#include <istream>
#include "./SemVersion.h"
#include <unordered_map>
#include "../json/Value.h"
#include <memory>
#include "./GameVersion.h"
#include <unordered_set>
#include <vector>
#include <functional>
#include <string>


class Util {

public:
    static long COLOR_CODE;
    static std::string EMPTY_STRING;
    static std::string NEW_LINE;
    static std::string EMPTY_GUID;


    void compress(std::string const&, std::string &);
    void decompress(std::string const&, std::string &);
    void removeIllegalChars(std::string);
    void removeChars(std::string, std::string const&);
    void stripQueryParametersFromUrl(std::string const&);
    void stripProtocolFromUrl(std::string const&);
    void stringIsInVector(std::vector<std::string, std::allocator<std::string>> const&, std::string const&);
    void trimVectorStrings(std::vector<std::string, std::allocator<std::string>> &);
    void hashCode(std::string const&);
    void removeAllColorCodes(std::string const&);
//  std::string findLastColorCode(gsl::basic_string_span<char const, -1l>, bool); //TODO: incomplete function definition
//  void span_find(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string safeString(char const*);
    void utf8lenDelta(std::string const&, std::string const&);
    void utf8lenNoColorCodes(std::string const&);
    void utf8substring(std::string const&, int, int);
    void appendUtf8Character(std::string &, int);
    void replaceSingleUtf8CharacterWithAscii(std::string &, std::string const&, char);
    void replaceUtf8CharactersWithAscii(std::string &, std::vector<std::pair<std::string, char>, std::allocator<std::pair<std::string, char>>> const&);
    void simpleFormat(std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    std::string toNiceString(int);
    std::string toString(float, int);
//  std::string caseFold(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    bool isIntegral(std::string);
    void urlEncode(std::string const&);
    void freeStringMemory(std::string &);
//  void countWordOccurrences(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  bool isValidPath(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    std::string formatTickDuration(int);
    std::string getFilesizeString(unsigned long);
    void splitString(std::string const&, char, std::vector<std::string, std::allocator<std::string>> &);
    void stringContains(std::string const&, char);
    void toInt(std::string const&, int &, int, int);
    std::string boolToString(bool);
    void toBool(std::string const&, bool &);
    void anonymizeIPAddress(std::string const&);
//  bool isValidIPv4(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  bool isValidIPv6(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void anonymizeIPv6Address(std::string const&);
//  bool isValidIP(gsl::basic_string_span<char const, -1l>, bool, bool); //TODO: incomplete function definition
    bool isValidIPAndPort(std::string const&, int);
//  void _recordProfanityLocationInWord(std::string const&, std::string &, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>>> const&, int, int, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
//  void _breakIntoWordsAndFindProfanity(std::string &, std::string &, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int>>> const&, std::unordered_set<char, std::hash<char>, std::equal_to<char>, std::allocator<char>> const&, std::set<std::pair<int, int>, std::less<std::pair<int, int>>, std::allocator<std::pair<int, int>>> &, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set const&, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>); //TODO: incomplete function definition
//  void filterProfanityFromString(std::string const&, std::unordered_map<std::string, int, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<std::string const, int>>> const&, std::unordered_set<std::string, std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::string>> const&); //TODO: incomplete function definition
    std::string getTimeStamp();
    bool isNumber(std::string const&);
    bool isNumberStringGreaterThan(std::string const&, std::string const&);
    bool isNumberStringLessThan(std::string const&, std::string const&);
    void toSafeNumber(std::string const&, unsigned long &);
    void toSafeNumber(std::string const&, unsigned int &);
    bool isWhiteSpace(char);
    bool isDigit(char);
    bool isAlphaNumeric(char);
    bool isAlphabeticChar(char);
    bool isLowerCaseAlphabetic(char);
    bool isUpperCaseAlphabetic(char);
    bool isUpperCaseAlphaHex(char);
    bool isLowerCaseAlphaHex(char);
    bool isStartIdentifierChar(char);
    bool isIdentifierChar(char);
//  void toString(BoneTransformType); //TODO: incomplete function definition
    void getDataInheritance(std::string const&);
//  void memcpy_strided(void *, unsigned long, void const*, unsigned long, unsigned long, unsigned long); //TODO: incomplete function definition
    void loadGameVersion(GameVersion &, Json::Value const&);
    void loadGameVersion(SemVersion &, Json::Value const&);
    std::string generateRandomId(int);
    bool isPowerOfTwo(unsigned int);
    bool isAligned(unsigned long, unsigned int);
    void nextHigherPow2(unsigned int);
    void nextLowerPow2(unsigned int);
    void highestBitSet(unsigned int);
//  void convertCapabilitiesStringToEnum(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void base64_encode(std::string const&, bool);
    std::string base64_encode(unsigned char const*, unsigned int, bool);
    void base64_decode(std::string const&);
    void base64_url_to_standard(std::string);
    void base64_standard_to_url(std::string);
    void base64url_encode(std::string);
    void base64url_decode(std::string);
//  void toString(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    void toString(std::string const&);
    void toWideString(std::string const&);
    void toHex(char);
    void toHex(std::string const&);
    void fromHex(std::string const&);
//  void compareNoCase(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void stringTrim(std::string const&);
    void stringTrim(std::string const&, std::string const&);
    void stringReplace(std::string &, std::string const&, std::string const&, int);
//  void stringReplace(std::string, buffer_span<std::pair<gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>>>); //TODO: incomplete function definition
    void stringReplaceCopy(std::string const&, std::string const&, std::string const&, int);
    std::string toLower(char const*);
    std::string toUpper(char const*);
    void removeInvalidFileNameCharacters(std::string const&);
    void toLower(std::string const&);
    void toUpper(std::string const&);
//  std::string toLower(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
//  std::string toUpper(gsl::basic_string_span<char const, -1l> const&); //TODO: incomplete function definition
    void toLowerInPlace(std::string &);
    void toUpperInPlace(std::string &);
//  std::string format(char const*, ...); //TODO: incomplete function definition
//  std::string vFormat(char const*, __va_list_tag *); //TODO: incomplete function definition
    bool startsWith(std::string const&, std::string const&);
//  bool startsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    void normalizeLineEndings(std::string &);
    void cp437ToUTF8(std::string const&);
    void cp1252ToUTF8(std::string const&);
    void stringUTF8ToUTF16(std::string const&);
//  void stringUTF16ToUTF8(std::__cxx11::basic_string<wchar_t, std::char_traits<wchar_t>, std::allocator<wchar_t>> const&); //TODO: incomplete function definition
    bool isValidUTF8(std::string const&);
    void u64FromString(std::string const&);
    void utf8len(std::string const&);
    bool endsWith(std::string const&, std::string const&);
//  bool endsWith(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    bool endsWithCaseInsensitive(std::string const&, std::string const&);
    void split(std::string const&, char);
    void split(std::string const&, std::function<bool (char)>);
    void safeGetline(std::istream &, std::string &);
//  void split(std::string const&, std::vector<std::string, std::allocator<std::string>> const&, bool, bool, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
//  void splitLines(std::string const&, std::istream & ((std::istream &, std::string &), ); //TODO: incomplete function definition
    void stripBOM(std::string &);
};
