#pragma once



namespace RakNet {

    class RakString {

    public:
        void C_String()const; // _ZNK6RakNet9RakString8C_StringEv
        void RakStringComp(RakNet::RakString const&, RakNet::RakString const&); // _ZN6RakNet9RakString13RakStringCompERKS0_S2_
        void StrCmp(RakNet::RakString const&)const; // _ZNK6RakNet9RakString6StrCmpERKS0_
        RakString(); // _ZN6RakNet9RakStringC2Ev
//      RakString(RakNet::RakString::SharedString *); //TODO: incomplete function definition // _ZN6RakNet9RakStringC2EPNS0_12SharedStringE
        RakString(char); // _ZN6RakNet9RakStringC2Ec
        void Assign(char const*); // _ZN6RakNet9RakString6AssignEPKc
        RakString(unsigned char); // _ZN6RakNet9RakStringC2Eh
//      RakString(unsigned char const*, ...); //TODO: incomplete function definition // _ZN6RakNet9RakStringC2EPKhz
//      void Assign(char const*, __va_list_tag *); //TODO: incomplete function definition // _ZN6RakNet9RakString6AssignEPKcP13__va_list_tag
//      RakString(char const*, ...); //TODO: incomplete function definition // _ZN6RakNet9RakStringC2EPKcz
        RakString(RakNet::RakString const&); // _ZN6RakNet9RakStringC2ERKS0_
        ~RakString(); // _ZN6RakNet9RakStringD2Ev
        void Free(); // _ZN6RakNet9RakString4FreeEv
//      void Realloc(RakNet::RakString::SharedString *, unsigned long); //TODO: incomplete function definition // _ZN6RakNet9RakString7ReallocEPNS0_12SharedStringEm
        bool IsEmpty()const; // _ZNK6RakNet9RakString7IsEmptyEv
        void Clone(); // _ZN6RakNet9RakString5CloneEv
        void GetLength()const; // _ZNK6RakNet9RakString9GetLengthEv
        void operator[](unsigned int)const; // _ZNK6RakNet9RakStringixEj
        void operator==(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringeqERKS0_
        void operator==(char const*)const; // _ZNK6RakNet9RakStringeqEPKc
        void operator==(char *)const; // _ZNK6RakNet9RakStringeqEPc
        void operator<(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringltERKS0_
        void operator<=(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringleERKS0_
        void operator>(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringgtERKS0_
        void operator>=(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringgeERKS0_
        void operator!=(RakNet::RakString const&)const; // _ZNK6RakNet9RakStringneERKS0_
        void operator!=(char const*)const; // _ZNK6RakNet9RakStringneEPKc
        void operator!=(char *)const; // _ZNK6RakNet9RakStringneEPc
        void LockMutex(); // _ZN6RakNet9RakString9LockMutexEv
        void UnlockMutex(); // _ZN6RakNet9RakString11UnlockMutexEv
        void ToLower(); // _ZN6RakNet9RakString7ToLowerEv
        void ToLower(unsigned char); // _ZN6RakNet9RakString7ToLowerEh
        void ToUpper(); // _ZN6RakNet9RakString7ToUpperEv
        void ToUpper(unsigned char); // _ZN6RakNet9RakString7ToUpperEh
//      void Set(char const*, ...); //TODO: incomplete function definition // _ZN6RakNet9RakString3SetEPKcz
        void Clear(); // _ZN6RakNet9RakString5ClearEv
        void GetLengthUTF8()const; // _ZNK6RakNet9RakString13GetLengthUTF8Ev
        void Replace(unsigned int, unsigned int, unsigned char); // _ZN6RakNet9RakString7ReplaceEjjh
        void SetChar(unsigned int, unsigned char); // _ZN6RakNet9RakString7SetCharEjh
        void SetChar(unsigned int, RakNet::RakString); // _ZN6RakNet9RakString7SetCharEjS0_
        void SubStr(unsigned int, unsigned int)const; // _ZNK6RakNet9RakString6SubStrEjj
        void Find(char const*, unsigned long); // _ZN6RakNet9RakString4FindEPKcm
        void TruncateUTF8(unsigned int); // _ZN6RakNet9RakString12TruncateUTF8Ej
        void Truncate(unsigned int); // _ZN6RakNet9RakString8TruncateEj
        void Allocate(unsigned long); // _ZN6RakNet9RakString8AllocateEm
        void Erase(unsigned int, unsigned int); // _ZN6RakNet9RakString5EraseEjj
        void TerminateAtLastCharacter(char); // _ZN6RakNet9RakString24TerminateAtLastCharacterEc
        void StartAfterLastCharacter(char); // _ZN6RakNet9RakString23StartAfterLastCharacterEc
        void TerminateAtFirstCharacter(char); // _ZN6RakNet9RakString25TerminateAtFirstCharacterEc
        void StartAfterFirstCharacter(char); // _ZN6RakNet9RakString24StartAfterFirstCharacterEc
        void GetCharacterCount(char); // _ZN6RakNet9RakString17GetCharacterCountEc
        void RemoveCharacter(char); // _ZN6RakNet9RakString15RemoveCharacterEc
        void StrNCmp(RakNet::RakString const&, unsigned long)const; // _ZNK6RakNet9RakString7StrNCmpERKS0_m
        void StrICmp(RakNet::RakString const&)const; // _ZNK6RakNet9RakString7StrICmpERKS0_
        void Printf(); // _ZN6RakNet9RakString6PrintfEv
//      void FPrintf(_IO_FILE *); //TODO: incomplete function definition // _ZN6RakNet9RakString7FPrintfEP8_IO_FILE
        void IPAddressMatch(char const*); // _ZN6RakNet9RakString14IPAddressMatchEPKc
        bool ContainsNonprintableExceptSpaces()const; // _ZNK6RakNet9RakString32ContainsNonprintableExceptSpacesEv
        bool IsEmailAddress()const; // _ZNK6RakNet9RakString14IsEmailAddressEv
        void URLEncode(); // _ZN6RakNet9RakString9URLEncodeEv
        void URLDecode(); // _ZN6RakNet9RakString9URLDecodeEv
        void SplitURI(RakNet::RakString &, RakNet::RakString &, RakNet::RakString &); // _ZN6RakNet9RakString8SplitURIERS0_S1_S1_
        void SQLEscape(); // _ZN6RakNet9RakString9SQLEscapeEv
        void FormatForPUTOrPost(char const*, char const*, char const*, char const*, char const*); // _ZN6RakNet9RakString18FormatForPUTOrPostEPKcS2_S2_S2_S2_
        void FormatForPOST(char const*, char const*, char const*, char const*); // _ZN6RakNet9RakString13FormatForPOSTEPKcS2_S2_S2_
        void FormatForPUT(char const*, char const*, char const*, char const*); // _ZN6RakNet9RakString12FormatForPUTEPKcS2_S2_S2_
        void FormatForGET(char const*, char const*); // _ZN6RakNet9RakString12FormatForGETEPKcS2_
        void FormatForDELETE(char const*, char const*); // _ZN6RakNet9RakString15FormatForDELETEEPKcS2_
        void MakeFilePath(); // _ZN6RakNet9RakString12MakeFilePathEv
        void FreeMemory(); // _ZN6RakNet9RakString10FreeMemoryEv
        void FreeMemoryNoMutex(); // _ZN6RakNet9RakString17FreeMemoryNoMutexEv
        void Serialize(RakNet::BitStream *)const; // _ZNK6RakNet9RakString9SerializeEPNS_9BitStreamE
        void Serialize(char const*, RakNet::BitStream *); // _ZN6RakNet9RakString9SerializeEPKcPNS_9BitStreamE
        void SerializeCompressed(RakNet::BitStream *, unsigned char, bool)const; // _ZNK6RakNet9RakString19SerializeCompressedEPNS_9BitStreamEhb
        void SerializeCompressed(char const*, RakNet::BitStream *, unsigned char, bool); // _ZN6RakNet9RakString19SerializeCompressedEPKcPNS_9BitStreamEhb
        void Deserialize(RakNet::BitStream *); // _ZN6RakNet9RakString11DeserializeEPNS_9BitStreamE
        void Deserialize(char *, RakNet::BitStream *); // _ZN6RakNet9RakString11DeserializeEPcPNS_9BitStreamE
        void DeserializeCompressed(RakNet::BitStream *, bool); // _ZN6RakNet9RakString21DeserializeCompressedEPNS_9BitStreamEb
        void DeserializeCompressed(char *, RakNet::BitStream *, bool); // _ZN6RakNet9RakString21DeserializeCompressedEPcPNS_9BitStreamEb
        void ToString(long); // _ZN6RakNet9RakString8ToStringEl
        void ToString(unsigned long); // _ZN6RakNet9RakString8ToStringEm
        void Assign(char const*, unsigned long, unsigned long); // _ZN6RakNet9RakString6AssignEPKcmm
        void NonVariadic(char const*); // _ZN6RakNet9RakString11NonVariadicEPKc
        void ToInteger(char const*); // _ZN6RakNet9RakString9ToIntegerEPKc
        void ToInteger(RakNet::RakString const&); // _ZN6RakNet9RakString9ToIntegerERKS0_
        void ReadIntFromSubstring(char const*, unsigned long, unsigned long); // _ZN6RakNet9RakString20ReadIntFromSubstringEPKcmm
        void AppendBytes(char const*, unsigned int); // _ZN6RakNet9RakString11AppendBytesEPKcj
        void GetSizeToAllocate(unsigned long); // _ZN6RakNet9RakString17GetSizeToAllocateEm
    };
}
