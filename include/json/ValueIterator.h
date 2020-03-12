#pragma once



namespace Json {

    class ValueIterator {

    public:
        ValueIterator();
        ValueIterator(Json::ValueConstIterator const&);
        void operator*()const;
        ValueIterator(Json::ValueIterator const&);
//      ValueIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
    };
}
