#pragma once



namespace RakNet {

    class RakString {

    public:
        void operator!=(char const*)const;
        void ToLower(unsigned char);
//      RakString(RakNet::RakString::SharedString *); //TODO: incomplete function definition
        void StrNCmp(RakNet::RakString const&, unsigned long)const;
        void operator!=(char *)const;
        void ToString(long);
        void ToInteger(RakNet::RakString const&);
//      RakString(char const*, ...); //TODO: incomplete function definition
        void FormatForPOST(char const*, char const*, char const*, char const*);
        void DeserializeCompressed(char *, RakNet::BitStream *, bool);
        void operator!=(RakNet::RakString const&)const;
        void TruncateUTF8(unsigned int);
        void MakeFilePath();
//      void FPrintf(_IO_FILE *); //TODO: incomplete function definition
        void SetChar(unsigned int, RakNet::RakString);
        void StartAfterFirstCharacter(char);
        void Erase(unsigned int, unsigned int);
        void GetSizeToAllocate(unsigned long);
//      void Set(char const*, ...); //TODO: incomplete function definition
        void Allocate(unsigned long);
        void Deserialize(char *, RakNet::BitStream *);
        void ToString(unsigned long);
        void GetCharacterCount(char);
        void UnlockMutex();
        void Assign(char const*, unsigned long, unsigned long);
        void operator>=(RakNet::RakString const&)const;
        void Free();
        void FreeMemoryNoMutex();
        ~RakString();
        void Find(char const*, unsigned long);
        void SQLEscape();
        void ToInteger(char const*);
        RakString(unsigned char);
        void Deserialize(RakNet::BitStream *);
        void TerminateAtLastCharacter(char);
        RakString(RakNet::RakString const&);
        void URLEncode();
        void ToUpper();
//      void Assign(char const*, __va_list_tag *); //TODO: incomplete function definition
        void FormatForPUT(char const*, char const*, char const*, char const*);
//      void Realloc(RakNet::RakString::SharedString *, unsigned long); //TODO: incomplete function definition
        void AppendBytes(char const*, unsigned int);
        void operator>(RakNet::RakString const&)const;
        void Printf();
        void LockMutex();
        void StrICmp(RakNet::RakString const&)const;
        bool IsEmpty()const;
        void operator==(RakNet::RakString const&)const;
        void operator<(RakNet::RakString const&)const;
        void GetLengthUTF8()const;
        void Clone();
        void SetChar(unsigned int, unsigned char);
        void Serialize(RakNet::BitStream *)const;
        void TerminateAtFirstCharacter(char);
        void operator[](unsigned int)const;
        void Replace(unsigned int, unsigned int, unsigned char);
        void FormatForGET(char const*, char const*);
        void Truncate(unsigned int);
        void ReadIntFromSubstring(char const*, unsigned long, unsigned long);
//      RakString(unsigned char const*, ...); //TODO: incomplete function definition
        void RakStringComp(RakNet::RakString const&, RakNet::RakString const&);
        void FormatForDELETE(char const*, char const*);
        void SubStr(unsigned int, unsigned int)const;
        void RemoveCharacter(char);
        RakString(char);
        void SplitURI(RakNet::RakString &, RakNet::RakString &, RakNet::RakString &);
        void StrCmp(RakNet::RakString const&)const;
        bool ContainsNonprintableExceptSpaces()const;
        void ToLower();
        void ToUpper(unsigned char);
        void Assign(char const*);
        void NonVariadic(char const*);
        void GetLength()const;
        void FreeMemory();
        void FormatForPUTOrPost(char const*, char const*, char const*, char const*, char const*);
        bool IsEmailAddress()const;
        void operator<=(RakNet::RakString const&)const;
        void URLDecode();
        void DeserializeCompressed(RakNet::BitStream *, bool);
        RakString();
        void IPAddressMatch(char const*);
        void StartAfterLastCharacter(char);
        void C_String()const;
        void SerializeCompressed(char const*, RakNet::BitStream *, unsigned char, bool);
        void SerializeCompressed(RakNet::BitStream *, unsigned char, bool)const;
        void operator==(char *)const;
        void Clear();
        void Serialize(char const*, RakNet::BitStream *);
        void operator==(char const*)const;
    };
}
