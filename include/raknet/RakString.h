#pragma once

#include "BitStream.h"


namespace RakNet {

    class RakString {

    public:
        void Erase(unsigned int, unsigned int);
        void SerializeCompressed(char const*, RakNet::BitStream *, unsigned char, bool);
//      RakString(unsigned char const*, ...); //TODO: incomplete function definition
        void Truncate(unsigned int);
        void Clear();
        void FreeMemoryNoMutex();
        void Allocate(unsigned long);
        bool IsEmpty()const;
        void ToLower();
//      void Set(char const*, ...); //TODO: incomplete function definition
        void Assign(char const*, unsigned long, unsigned long);
        void Free();
        void operator!=(RakNet::RakString const&)const;
        void C_String()const;
        void StrCmp(RakNet::RakString const&)const;
//      void Assign(char const*, __va_list_tag *); //TODO: incomplete function definition
//      RakString(char const*, ...); //TODO: incomplete function definition
        bool ContainsNonprintableExceptSpaces()const;
        void FormatForDELETE(char const*, char const*);
        void RemoveCharacter(char);
        void IPAddressMatch(char const*);
        void UnlockMutex();
        void GetCharacterCount(char);
        void Deserialize(char *, RakNet::BitStream *);
        void GetLength()const;
        void TerminateAtLastCharacter(char);
        void ToInteger(RakNet::RakString const&);
        void operator>(RakNet::RakString const&)const;
        void Clone();
        RakString(unsigned char);
        void FormatForGET(char const*, char const*);
        void operator<=(RakNet::RakString const&)const;
        RakString(char);
        void SQLEscape();
        RakString(RakNet::RakString const&);
        void TruncateUTF8(unsigned int);
        void NonVariadic(char const*);
        void ToInteger(char const*);
        void SubStr(unsigned int, unsigned int)const;
        void operator!=(char const*)const;
        void operator==(RakNet::RakString const&)const;
        void operator!=(char *)const;
//      void FPrintf(_IO_FILE *); //TODO: incomplete function definition
        void FormatForPOST(char const*, char const*, char const*, char const*);
        RakString();
        void URLDecode();
        void FormatForPUT(char const*, char const*, char const*, char const*);
        bool IsEmailAddress()const;
        void FormatForPUTOrPost(char const*, char const*, char const*, char const*, char const*);
        void Find(char const*, unsigned long);
        void SerializeCompressed(RakNet::BitStream *, unsigned char, bool)const;
//      void Realloc(RakNet::RakString::SharedString *, unsigned long); //TODO: incomplete function definition
        void Printf();
        void DeserializeCompressed(RakNet::BitStream *, bool);
        void DeserializeCompressed(char *, RakNet::BitStream *, bool);
        void GetSizeToAllocate(unsigned long);
        void RakStringComp(RakNet::RakString const&, RakNet::RakString const&);
        void SetChar(unsigned int, unsigned char);
        void LockMutex();
        void Serialize(char const*, RakNet::BitStream *);
        void StartAfterLastCharacter(char);
//      RakString(RakNet::RakString::SharedString *); //TODO: incomplete function definition
        void GetLengthUTF8()const;
        ~RakString();
        void ReadIntFromSubstring(char const*, unsigned long, unsigned long);
        void StrNCmp(RakNet::RakString const&, unsigned long)const;
        void ToUpper(unsigned char);
        void ToString(long);
        void StartAfterFirstCharacter(char);
        void FreeMemory();
        void MakeFilePath();
        void Assign(char const*);
        void StrICmp(RakNet::RakString const&)const;
        void Replace(unsigned int, unsigned int, unsigned char);
        void SplitURI(RakNet::RakString &, RakNet::RakString &, RakNet::RakString &);
        void AppendBytes(char const*, unsigned int);
        void TerminateAtFirstCharacter(char);
        void operator==(char const*)const;
        void ToString(unsigned long);
        void ToLower(unsigned char);
        void ToUpper();
        void operator[](unsigned int)const;
        void operator<(RakNet::RakString const&)const;
        void operator>=(RakNet::RakString const&)const;
        void operator==(char *)const;
        void URLEncode();
        void Serialize(RakNet::BitStream *)const;
        void SetChar(unsigned int, RakNet::RakString);
        void Deserialize(RakNet::BitStream *);
    };
}
