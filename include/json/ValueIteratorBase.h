#pragma once



namespace Json {

    class ValueIteratorBase {

    public:
        void operator!=(Json::ValueIteratorBase const&)const; // _ZNK4Json17ValueIteratorBaseneERKS0_
        ValueIteratorBase(); // _ZN4Json17ValueIteratorBaseC2Ev
        ValueIteratorBase(Json::ValueIteratorBase const&); // _ZN4Json17ValueIteratorBaseC2ERKS0_
//      ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition // _ZN4Json17ValueIteratorBaseC2ERKSt17_Rb_tree_iteratorISt4pairIKNS_5Value8CZStringES3_EE
        void deref()const; // _ZNK4Json17ValueIteratorBase5derefEv
        void increment(); // _ZN4Json17ValueIteratorBase9incrementEv
        void decrement(); // _ZN4Json17ValueIteratorBase9decrementEv
        void computeDistance(Json::ValueIteratorBase const&)const; // _ZNK4Json17ValueIteratorBase15computeDistanceERKS0_
        bool isEqual(Json::ValueIteratorBase const&)const; // _ZNK4Json17ValueIteratorBase7isEqualERKS0_
        void copy(Json::ValueIteratorBase const&); // _ZN4Json17ValueIteratorBase4copyERKS0_
        void key()const; // _ZNK4Json17ValueIteratorBase3keyEv
        void index()const; // _ZNK4Json17ValueIteratorBase5indexEv
        void memberName()const; // _ZNK4Json17ValueIteratorBase10memberNameEv
    };
}
