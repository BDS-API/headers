#pragma once



namespace Json {

    class ValueConstIterator {

    public:
//      ValueConstIterator(std::_Rb_tree_iterator<std::pair<Json::Value::CZString const, Json::Value>> const&); //TODO: incomplete function definition
        ValueConstIterator();
        void operator*()const;
        ValueConstIterator(Json::ValueConstIterator const&);
    };
}
