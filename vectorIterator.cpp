template <class T>
VectorIterator<T>::VectorIterator(std::vector<T> v)
    : vector_(v), index_(-1)
{
}

template <class T>
bool VectorIterator<T>::hasNext()
{
    return index_ < int(vector_.size() - 1);
}

template <class T>
T VectorIterator<T>::next()
{
    index_++;
    return vector_.at(index_);
}
