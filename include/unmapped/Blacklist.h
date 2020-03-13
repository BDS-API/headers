#pragma once

#include <string>
#include <vector>


class Blacklist {

public:
    class Entry;

    Blacklist(); // _ZN9BlacklistC2Ev
    ~Blacklist(); // _ZN9BlacklistD2Ev
    bool isBlocked(Blacklist::Entry const&)const; // _ZNK9Blacklist9isBlockedERKNS_5EntryE
//  bool isBlocked(Blacklist::Entry const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition // _ZNK9Blacklist9isBlockedERKNS_5EntryERN9__gnu_cxx17__normal_iteratorIPS1_St6vectorIS0_SaIS0_EEEE
    std::string getMessage(Blacklist::Entry const&)const; // _ZNK9Blacklist10getMessageB5cxx11ERKNS_5EntryE
    void getDuration(Blacklist::Entry const&)const; // _ZNK9Blacklist11getDurationERKNS_5EntryE
    void clear(); // _ZN9Blacklist5clearEv
    void setEntries(std::vector<Blacklist::Entry> const&); // _ZN9Blacklist10setEntriesERKSt6vectorINS_5EntryESaIS1_EE
    void addEntry(Blacklist::Entry const&); // _ZN9Blacklist8addEntryERKNS_5EntryE
    void removeEntry(Blacklist::Entry const&); // _ZN9Blacklist11removeEntryERKNS_5EntryE
//  bool isUUIDBlocked(mce::UUID const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition // _ZNK9Blacklist13isUUIDBlockedERKN3mce4UUIDERN9__gnu_cxx17__normal_iteratorIPKNS_5EntryESt6vectorIS6_SaIS6_EEEE
//  bool isXUIDBlocked(std::string const&, __gnu_cxx::__normal_iterator<Blacklist::Entry const*, std::vector<Blacklist::Entry>> &)const; //TODO: incomplete function definition // _ZNK9Blacklist13isXUIDBlockedERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERN9__gnu_cxx17__normal_iteratorIPKNS_5EntryESt6vectorISA_SaISA_EEEE
    class Entry {

    public:
        Entry(mce::UUID const&, std::string const&); // _ZN9Blacklist5EntryC2ERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
        ~Entry(); // _ZN9Blacklist5EntryD2Ev
//      Entry(mce::UUID const&, std::string const&, std::string const&, Blacklist::Duration const&); //TODO: incomplete function definition // _ZN9Blacklist5EntryC2ERKN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESC_RKNS_8DurationE
        Entry(Blacklist::Entry const&); // _ZN9Blacklist5EntryC2ERKS0_
        Entry(Blacklist::Entry &&); // _ZN9Blacklist5EntryC2EOS0_
    };
};
