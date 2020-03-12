#pragma once



namespace Json {

    class ValueIteratorBase {

    public:
//      ValueIteratorBase(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
        void deref()const;
        void increment();
        void index()const;
        ValueIteratorBase(Json::ValueIteratorBase const&);
        void copy(Json::ValueIteratorBase const&);
        void operator!=(Json::ValueIteratorBase const&)const;
        void memberName()const;
        void decrement();
        bool isEqual(Json::ValueIteratorBase const&)const;
        void key()const;
        ValueIteratorBase();
        void computeDistance(Json::ValueIteratorBase const&)const;
    };
}
