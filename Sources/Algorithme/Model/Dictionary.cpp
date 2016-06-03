#include "Dictionary.hpp"

Dictionary::Dictionary() : entries_(new QList<DictionaryEntry>())
{
}

void Dictionary::addEntry(const DictionaryEntry &e) {
    entries_->append(e);
}
