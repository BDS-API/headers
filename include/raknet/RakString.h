#pragma once

#include "./RakString.h"
#include "./BitStream.h"


namespace RakNet {

class RakString {

public:

    void C_String()const;
    void RakStringComp(RakNet::RakString const&, RakNet::RakString const&);
    void StrCmp(RakNet::RakString const&)const;
    RakString();
//  RakString(RakNet::RakString::SharedString *); //TODO: incomplete function definition
    RakString(char);
    void Assign(char const*);
    RakString(unsigned char);
//  RakString(unsigned char const*, ...); //TODO: incomplete function definition
//  void Assign(char const*, __va_list_tag *); //TODO: incomplete function definition
//  RakString(char const*, ...); //TODO: incomplete function definition
    RakString(RakNet::RakString const&);
    ~RakString();
    void Free();
//  void Realloc(RakNet::RakString::SharedString *, unsigned long); //TODO: incomplete function definition
    bool IsEmpty()const;
    void Clone();
    void GetLength()const;
    void operator[](unsigned int)const;
    void operator==(RakNet::RakString const&)const;
    void operator==(char const*)const;
    void operator==(char *)const;
    void operator<(RakNet::RakString const&)const;
    void operator<=(RakNet::RakString const&)const;
    void operator>(RakNet::RakString const&)const;
    void operator>=(RakNet::RakString const&)const;
    void operator!=(RakNet::RakString const&)const;
    void operator!=(char const*)const;
    void operator!=(char *)const;
    void LockMutex();
    void UnlockMutex();
    void ToLower();
    void ToLower(unsigned char);
    void ToUpper();
    void ToUpper(unsigned char);
//  void Set(char const*, ...); //TODO: incomplete function definition
    void Clear();
    void GetLengthUTF8()const;
    void Replace(unsigned int, unsigned int, unsigned char);
    void SetChar(unsigned int, unsigned char);
    void SetChar(unsigned int, RakNet::RakString);
    void SubStr(unsigned int, unsigned int)const;
    void Find(char const*, unsigned long);
    void TruncateUTF8(unsigned int);
    void Truncate(unsigned int);
    void Allocate(unsigned long);
    void Erase(unsigned int, unsigned int);
    void TerminateAtLastCharacter(char);
    void StartAfterLastCharacter(char);
    void TerminateAtFirstCharacter(char);
    void StartAfterFirstCharacter(char);
    void GetCharacterCount(char);
    void RemoveCharacter(char);
    void StrNCmp(RakNet::RakString const&, unsigned long)const;
    void StrICmp(RakNet::RakString const&)const;
    void Printf();
//  void FPrintf(_IO_FILE *); //TODO: incomplete function definition
    void IPAddressMatch(char const*);
    bool ContainsNonprintableExceptSpaces()const;
    bool IsEmailAddress()const;
    void URLEncode();
    void URLDecode();
    void SplitURI(RakNet::RakString &, RakNet::RakString &, RakNet::RakString &);
    void SQLEscape();
    void FormatForPUTOrPost(char const*, char const*, char const*, char const*, char const*);
    void FormatForPOST(char const*, char const*, char const*, char const*);
    void FormatForPUT(char const*, char const*, char const*, char const*);
    void FormatForGET(char const*, char const*);
    void FormatForDELETE(char const*, char const*);
    void MakeFilePath();
    void FreeMemory();
    void FreeMemoryNoMutex();
    void Serialize(RakNet::BitStream *)const;
    void Serialize(char const*, RakNet::BitStream *);
    void SerializeCompressed(RakNet::BitStream *, unsigned char, bool)const;
    void SerializeCompressed(char const*, RakNet::BitStream *, unsigned char, bool);
    void Deserialize(RakNet::BitStream *);
    void Deserialize(char *, RakNet::BitStream *);
    void DeserializeCompressed(RakNet::BitStream *, bool);
    void DeserializeCompressed(char *, RakNet::BitStream *, bool);
    void ToString(long);
    void ToString(unsigned long);
    void Assign(char const*, unsigned long, unsigned long);
    void NonVariadic(char const*);
    void ToInteger(char const*);
    void ToInteger(RakNet::RakString const&);
    void ReadIntFromSubstring(char const*, unsigned long, unsigned long);
    void AppendBytes(char const*, unsigned int);
    void GetSizeToAllocate(unsigned long);
};

}