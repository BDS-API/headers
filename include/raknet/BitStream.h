#pragma once



namespace RakNet {

    class BitStream {

    public:
        void ReadCompressed(unsigned char *, unsigned int, bool);
        void Write(RakNet::BitStream *, unsigned int);
        void DestroyInstance(RakNet::BitStream *);
        void Write(RakNet::BitStream *);
        void DoEndianSwap();
        void PrintHex()const;
        void AssertCopyData();
        void ReadAlignedVar32(char *);
        void EndianSwapBytes(int, int);
        void CopyData(unsigned char **)const;
        void Read(unsigned char *);
        void Read(RakNet::BitStream *);
        void ReverseBytesInPlace(unsigned char *, unsigned int);
        void ReadAlignedBytesSafeAlloc(char **, unsigned int &, unsigned int);
        void SerializeFloat16(bool, float &, float, float);
        void Read(char *, unsigned int);
        void Read(RakNet::BitStream *, unsigned int);
        void Write1();
        void SetWriteOffset(unsigned int);
        void AssertStreamEmpty();
        void AddBitsAndReallocate(unsigned int);
        bool IsNetworkOrder();
        void SetNumberOfBitsAllocated(unsigned int);
        void NumberOfLeadingZeroes(unsigned int);
        void Write(RakNet::BitStream &);
        void NumberOfLeadingZeroes(short);
        BitStream(unsigned int);
        void ReadAlignedBytesSafe(char *, unsigned int &, unsigned int);
        void IgnoreBits(unsigned int);
        void ReadFloat16(float &, float, float);
        void PadWithZeroToByteLength(unsigned int);
        void Read(char *);
        ~BitStream();
        void WriteBits(unsigned char const*, unsigned int, bool);
        void ReadBits(unsigned char *, unsigned int, bool);
        bool IsNetworkOrderInternal();
        void IgnoreBytes(unsigned int);
        void Write(RakNet::BitStream &, unsigned int);
        void WriteAlignedBytesSafe(char const*, unsigned int, unsigned int);
        void NumberOfLeadingZeroes(unsigned char);
        void ReadAlignedBytesSafe(char *, int &, int);
        void ReadBit();
        void ResetReadPointer();
        void SetData(unsigned char *);
        void Write(char const*, unsigned int);
        void WriteAlignedVar8(char const*);
        void GetNumberOfBitsUsed()const;
        void NumberOfLeadingZeroes(int);
        void WriteAlignedVar16(char const*);
        bool IsBigEndian();
        void Write0();
        void PrintBits(char *)const;
        void GetNumberOfUnreadBits()const;
        void GetData()const;
        BitStream(unsigned char *, unsigned int, bool);
        void Reset();
        void GetInstance();
        void ReadAlignedVar16(char *);
        void NumberOfLeadingZeroes(unsigned short);
        void GetNumberOfBitsAllocated()const;
        void AlignWriteToByteBoundary();
        void ReadAlignedVar8(char *);
        void GetNumberOfBytesUsed()const;
        void AlignReadToByteBoundary();
        void NumberOfLeadingZeroes(unsigned long);
        BitStream();
        void GetReadOffset()const;
        void ResetWritePointer();
        void WriteAlignedBytes(unsigned char const*, unsigned int);
        void ReadAlignedBytes(unsigned char *, unsigned int);
        void GetWriteOffset()const;
        void ReadAlignedBytesSafeAlloc(char **, int &, unsigned int);
        void ReverseBytes(unsigned char *, unsigned char *, unsigned int);
        void PrintBits()const;
        void WriteFloat16(float, float, float);
        void NumberOfLeadingZeroes(long);
        void WriteCompressed(unsigned char const*, unsigned int, bool);
        void Read(RakNet::BitStream &);
        void Read(RakNet::BitStream &, unsigned int);
        void PrintHex(char *)const;
        void SetReadOffset(unsigned int);
        void WriteAlignedVar32(char const*);
//      void NumberOfLeadingZeroes(signed const); //TODO: incomplete function definition
    };
}
