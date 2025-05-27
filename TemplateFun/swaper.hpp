#ifndef SWAPPER_H
#define SWAPPER_H

// NOTE: implementation of template 
// and decalration needs to be in the same file

template<class T>
class Swapper{
    public:
        Swapper(T first, T second);
        void swap();
        T getFirst() const;
        T getSecond() const;
    private:
        T first;
        T second;

 

        
};

template <class T>
Swapper<T>::Swapper(T first, T second){
    this->first = first;
    this->second = second;

}; 

// this template line is needed above every methods. Why?
template <class T>
void Swapper<T>::swap(){
    T temp = first;
    first = second;
    second = temp;
};

template <class T>
T Swapper<T>::getFirst() const{
    return this->first;
};

template <class T>
T Swapper<T>::getSecond() const{
    return this->second;
};

#endif