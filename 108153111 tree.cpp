#ifndef TREE_H
#define TREE_H
 
template<typename T>
class TreeList;
 
template<typename T>
class Tree
{
    public:
        Tree(T value)
        {
            this->value = value;
        }
        virtual ~Tree() {}
 
        T getValue()
        {
            return value;
        }
        void setValue(T value)
        {
            this.value = value;
        }
        virtual Tree<T>* parent() = 0;
        virtual TreeList<T>* children() = 0;
        virtual int level() = 0;
        virtual int size() = 0;
        virtual int depth() = 0;
        virtual int degree() = 0;
        virtual void add(T value) = 0;
        virtual void add(Tree<T>* tree) = 0;
        virtual void remove() = 0;
        virtual Tree<T>* clone() = 0;
    protected:
        T value;
    private:
};
 
 
template<typename T>
class TreeList
{
    public:
        TreeList() {}
        virtual ~TreeList() {}
        virtual int size() = 0;
        virtual void begin() = 0;
        virtual Tree<T>* next() = 0;
    protected:
    private:
};
 
#endif // TREE_H
