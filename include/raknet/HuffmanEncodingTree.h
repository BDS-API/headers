#pragma once

#include "./BitStream.h"


namespace RakNet {

class HuffmanEncodingTree {

public:

    HuffmanEncodingTree();
    ~HuffmanEncodingTree();
    void FreeMemory();
    void GenerateFromFrequencyTable(unsigned int *);
//  void InsertNodeIntoSortedList(HuffmanEncodingTreeNode *, DataStructures::LinkedList<HuffmanEncodingTreeNode *> *)const; //TODO: incomplete function definition
    void EncodeArray(unsigned char *, unsigned long, RakNet::BitStream *);
    void DecodeArray(RakNet::BitStream *, unsigned int, unsigned long, unsigned char *);
    void DecodeArray(unsigned char *, unsigned int, RakNet::BitStream *);
};

}