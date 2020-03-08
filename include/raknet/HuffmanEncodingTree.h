#pragma once



using namespace RakNet;

class HuffmanEncodingTree {

public:

    HuffmanEncodingTree(void);
    void FreeMemory();
    void GenerateFromFrequencyTable(unsigned int *);
    void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *, DataStructures::LinkedList<HuffmanEncodingTreeNode *> *)const;
    void EncodeArray(unsigned char *, unsigned long, RakNet::BitStream *);
    void DecodeArray(RakNet::BitStream *, unsigned int, unsigned long, unsigned char *);
    void DecodeArray(unsigned char *, unsigned int, RakNet::BitStream *);
};
