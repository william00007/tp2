template <class T>
FilterIterator<T>::FilterIterator(Iterator<T> * it, const Predicate<T> * predicate)
    : it_(it), predicate_(predicate)
{
}

template <class T>
bool FilterIterator<T>::hasNext()
{
    // TODO
    return it_->hasNext();
}

template <class T>
T FilterIterator<T>::next()
{
    // TODO
    return it_->next();
}
